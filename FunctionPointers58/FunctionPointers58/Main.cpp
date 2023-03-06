#include <iostream>
#include <string>
#include <vector>

void HelloWorld(const std::string name)
{
	std::cout << "Hello World! " << name << std::endl;
}

void ForEach(const std::vector<int>& values, void(*func)(int))
{
	for (int value : values)
		func(value);
}

void PrintValue(int value)
{
	std::cout << "Value: " << value << std::endl;
}

int main()
{
	// 给void(*)()起个别名为funciton
	typedef void(*HelloworldFunction)(const std::string );
	HelloworldFunction helloworld = HelloWorld;
	helloworld("Henry");

	void(*func)(const std::string) = HelloWorld;
	func("Henry");

	std::vector<int> values = { 1, 2, 3, 4, 5 };
	ForEach(values, PrintValue);

	// use lambda
	ForEach(values, [](int a) {std::cout << "Value: " << a << std::endl; });

	std::cin.get();
}