#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
#include <iomanip>

class ScalarConverter
{
private:
  ScalarConverter(); // Private constructor to prevent instantiation
  ScalarConverter(const ScalarConverter& og);
  ScalarConverter& operator=(const ScalarConverter& og);
  ~ScalarConverter();

public:
  static void convert(const std::string& literal);
  static void printChar(double value);
  static void printInt(double value);
  static void printFloat(double value);
  static void printDouble(double value);
};

#endif
