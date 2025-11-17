#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& og)
{
  (void)og;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& og)
{
  (void)og;
  return *this;
}
ScalarConverter::~ScalarConverter()
{}

void ScalarConverter::printChar(double value)
{
  std::cout << "char: ";
  if (std::isnan(value) || std::isinf(value) || value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
    std::cout << "impossible" << std::endl;
  else if (!std::isprint(static_cast<char>(value)))
    std::cout << "Non displayable" << std::endl;
  else
    std::cout << "'" << static_cast<char>(value) << "'" << std::endl;
}

void ScalarConverter::printInt(double value)
{
  std::cout << "int: ";
  if (std::isnan(value) || std::isinf(value) || value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
    std::cout << "impossible" << std::endl;
  else
    std::cout << static_cast<int>(value) << std::endl;
}

void ScalarConverter::printFloat(double value)
{
  std::cout << "float: ";
  if (std::isnan(value))
    std::cout << "nanf" << std::endl;
  else if (std::isinf(value))
    std::cout << (value < 0 ? "-inff" : "+inff") << std::endl;
  else if (value < -std::numeric_limits<float>::max() || value > std::numeric_limits<float>::max())
    std::cout << "impossible" << std::endl;
  else
    std::cout << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;
}

void ScalarConverter::printDouble(double value)
{
  std::cout << "double: ";
  if (std::isnan(value))
    std::cout << "nan" << std::endl;
  else if (std::isinf(value))
    std::cout << (value < 0 ? "-inf" : "+inf") << std::endl;
  else
    std::cout << std::fixed << std::setprecision(1) << value << std::endl;
}

void ScalarConverter::convert(const std::string& literal)
{
  double value;
  std::string type;

  // Determine type and convert to double
  if (literal.length() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]))
  {
    value = static_cast<double>(literal[0]);
    type = "char";
  }
  else
  {
    try
    {
      size_t pos;
      value = std::stod(literal, &pos);
      if (pos == literal.length())
        type = "double";
      else if (pos == literal.length() - 1 && literal[literal.length() - 1] == 'f')
      {
        value = std::stof(literal, &pos);
        type = "float";
      }
      else
      {
        std::cout << "Error: Unknown literal type." << std::endl;
        return;
      }
    }
    catch (const std::out_of_range& oor)
    {
      std::cout << "Error: Out of range." << std::endl;
      return;
    }
    catch (const std::invalid_argument& ia)
    {
      if (literal == "-inf" || literal == "+inf" || literal == "nan")
      {
        value = std::stod(literal);
        type = "double";
      }
      else if (literal == "-inff" || literal == "+inff" || literal == "nanf")
      {
        value = std::stof(literal.substr(0, literal.length() - 1));
        type = "float";
      }
      else
      {
        std::cout << "Error: Invalid argument." << std::endl;
        return;
      }
    }
  }

  // Print conversions
  ScalarConverter::printChar(value);
  ScalarConverter::printInt(value);
  ScalarConverter::printFloat(value);
  ScalarConverter::printDouble(value);
}
