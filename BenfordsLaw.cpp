#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
void Analyze(char fname[])
{
	double total = 0, one = 0, two = 0, three = 0;
	std::string line;
	std::ifstream data (fname);
	if (data.is_open())
	{
		while (getline(data, line))
		{
			++total;
			if (line[0] == '1') ++one;
			if (line[0] == '2') ++two;
			if (line[0] == '3') ++three;
		}
		data.close();
	}
	std::cout << std::fixed;
	std::cout << "\n1)" << std::setprecision(2) << one / total  << std::endl;
	std::cout << "2)" << std::setprecision(2) << two / total << std::endl;
	std::cout << "3)" << std::setprecision(2) << three / total << std::endl;
	return;
}
int main()
{
	//Data files contain one random int per line
	Analyze("data1.txt");
	Analyze("data2.txt");
	Analyze("data3.txt");
	return 0;
}

