#include <iostream>

enum Example: unsigned char
{
	A=1, B, C
};

int a = 0;
int b = 1;
int c = 2;

int main()
{
	Example value = B;

	if (value == B)
	{
		// Do something here;
	}
	
	
	std::cin.get();
}