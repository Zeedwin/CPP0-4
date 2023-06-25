#include <iostream>

int main() 
{
	std::string str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string &strREF = str;

	std::cout << "str address: " << &str << "\n";
	std::cout << "strPTR address: " << strPTR << "\n";
	std::cout << "strREF address: " << &strREF << "\n";

	std::cout << "str value: " << str << "\n";
	std::cout << "strPTR: " << *strPTR << "\n";
	std::cout << "strREF: " << strREF << "\n";
}