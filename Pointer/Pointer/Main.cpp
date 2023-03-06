#include <iostream>

#define LOG(x) std::cout << x << std::endl

int main()
{	//create data on STACK
	//int var = 8;
	//int* ptr = &var; // get the memory address of var
	//*ptr = 10;
	//LOG(var);

	//create data on HEAP
	char* buffer = new char[8];
	memset(buffer, 0, 8);	// fill memory of pointer buffer and set as 0

	char** ptr = &buffer; //ptr point to the memory address of buffer

	delete[] buffer;

	std::cin.get();
}