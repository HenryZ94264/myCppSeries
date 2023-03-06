#include <iostream>
#include <string>

struct Vector3
{
	float x, y, z;
	Vector3() : x(10), y(11), z(12) {}
};

int main()
{
	// stack allocation: 堆栈指针向后移动n个字节，存值，放入safety guard，因为该指针是根据字节索引的，所以访问非常快
	int value = 5;
	int sarray[5];
	sarray[0] = 1;
	sarray[1] = 2;
	sarray[2] = 3;
	sarray[3] = 4;
	sarray[4] = 5;
	Vector3 sVector;

	// heap allocation
	int* hvalue = new int;
	*hvalue = 5;
	int* harray = new int[5];
	harray[0] = 1;
	harray[1] = 2;
	harray[2] = 3;
	harray[3] = 4;
	harray[4] = 5;
	Vector3* hVector = new Vector3();

	delete hvalue;
	delete[] harray;
	delete hVector;

	std::cin.get();
}