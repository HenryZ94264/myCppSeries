#include <iostream>
#include <string>

#include <stdlib.h>

void PrintString(const std::string& string)
{
	std::cout << string << std::endl;
}

int main()
{
	//char* name = (char[6])"Henry";
	//char name2[6] = { 'H', 'e', 'n', 'r', 'y', 0 };
	//std::cout << name2 << std::endl;
	//name[2] = 'a';
	//std::cout << name << std::endl;


	//std::string name = std::string("Henry") + ":hello!";
	//int pos = name.find("en");

	//std::cout << name << std::endl;

	//char name2[] = "Henry";
	//name2[1] = 'a';
	//std::cout << name2 << std::endl;

	const wchar_t* name2 = L"Henry";	//wide char 2bytes
	const char16_t* name3 = u"Henry";	// 2 bytes
	const char32_t* name4 = U"Henry";	// 4 bytes

	const char* paragraph = "Line1\n"
	"Line2\n"
	"Line3\n";

	const char* paragraph2 = R"(Line1
Line2
Line3)";	

	std::cout << paragraph << std::endl;
	std::cout << paragraph2 << std::endl;

	std::cin.get();
}