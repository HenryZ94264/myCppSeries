#include <iostream>
#include <array>

// Using template to PrintArray with std::array type as input parameter
template <class _Ty, size_t n>
void PrintArray(std::array<_Ty, n>& array)
{
	for (int i = 0; i < n; ++i)
	{
		std::cout << array[i] << std::endl;
	}
}

int main()
{
	std::array<int, 5> data;
	data[0] = 2;
	data[4] = 1;
	//data[5] = 3;	// stdlib的array会报错

	PrintArray(data);

	// C-Style
	int dataOld[5];
	dataOld[0] = 2;
	dataOld[4] = 1;
	//dataOld[5] = 2;	// 普通C-style会在运行后崩溃且不告知错误


	std::cin.get();
}