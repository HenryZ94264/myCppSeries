#include <iostream>
#define LOG(x) std::cout << x << std::endl

void Increment(int& value)
{
	value++;
}

int main()
{
	int a = 5;

	Increment(a);
	LOG(a);

	int* a_ptr = &a;

	int& a_ref = a;	//a_ref is only a 别名 of 'a'

	a_ref = 2;
	LOG(a_ref);

	std::cin.get();
}