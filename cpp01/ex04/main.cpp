#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong amount of arguments" << std::endl;
		exit(1);
	}
	std::ifstream ifs(argv[1]);
	if (!ifs.good())
	{
		std::cout << "File error" << std::endl;
		exit(1);
	}
	std::string file;
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty() || s2.empty())
	{
		std::cout << "Invalid arguments" << std::endl;
		exit(1);
	}
	std::getline(ifs, file, '\0');
	ifs.close();
	unsigned long pos = file.find(s1, 0);
	while (pos != std::string::npos)
	{
		file.erase(pos, s1.length());
		file.insert(pos, s2);
		pos += s2.length();
		pos = file.find(s1, pos);
	}
	std::string output = argv[1];
	output += ".replace";
	std::ofstream ofs(output);
	if (!ofs.good())
	{
		std::cout << "Output file error" << std::endl;
		exit(1);
	}
	ofs << file;
	ofs.close();
}