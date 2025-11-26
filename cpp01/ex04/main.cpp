#include <iostream>
#include <fstream>

std::string replaceString(const std::string &line, const std::string &s1, const std::string &s2)
{
	if (s1.empty())
		return line;
	
	std::string result;
	std::size_t pos = 0;
	std::size_t found = 0;
	
	while ((found = line.find(s1, pos)) != std::string::npos)
	{
		result += line.substr(pos, found - pos);
		result += s2;
		pos = found + s1.length();
	}
	result += line.substr(pos);
	return result;
}

bool sed(const std::string &filename, const std::string &s1, const std::string &s2)
{
	if (filename.empty())
	{
		std::cerr << "Error: filename cannot be empty" << std::endl;
		return false;
	}
	std::ifstream in(filename.c_str());
	if (!in)
	{
		std::cerr << "Error: cannot open file '" << filename << "'" << std::endl;
		return false;
	}
	std::string outputFilename = filename + ".replace";
	std::ofstream out(outputFilename.c_str());
	if (!out)
	{
		std::cerr << "Error: cannot create output file '" << outputFilename << "'" << std::endl;
		in.close();
		return false;
	}
	std::string line;
	while (std::getline(in, line))
	{
		std::string replacedLine = replaceString(line, s1, s2);
		out << replacedLine;
		if (in.good())
			out << std::endl;
	}
	if (!in.eof() && in.fail())
	{
		std::cerr << "Error: failed to read from file '" << filename << "'" << std::endl;
		in.close();
		out.close();
		return false;
	}
	in.close();
	out.close();
	return true;
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: <filename> <s1> <s2>" << std::endl;
		return 1;	
	}
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (!sed(filename, s1, s2))
		return 1;
	return 0;
}