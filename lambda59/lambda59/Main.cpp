#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

void ForEach(const std::vector<int>& values,const std::function<void(int)>& func)
{
	for (int value : values)
		func(value);
}

int main()
{
	std::vector<int> values = { 1, 5, 4, 2, 3, };
	auto it = std::find_if(values.begin(), values.end(), [](int value) -> int { return value > 3; });
	std::cout << *it << std::endl;

	int a = 5;
	
	auto lambda = [=](int value) {std::cout << "value: " << value << ", and a: " << a << std::endl; };
	
	ForEach(values, lambda);

	std::cin.get();
}