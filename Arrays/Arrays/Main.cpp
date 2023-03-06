#include <iostream>
#include <array>

class Entity
{
public:
	static const int size = 5;
	int example[size];

	Entity()
	{
		//int count = sizeof(example) / sizeof(int);

		for (int i = 0; i < size; i++)
			example[i] = 2;
	}

	// c11 array
	//std::array<int, 5> another;

	//for (int i = 0; i < another.size(); i++)
	//	another[i] = i;

};

int main()
{

	int example[5];		// create on stack
	

	for (int i = 0; i < 5; i++)
		example[i] = i;

	int* ptr = example;
	*(ptr + 2) = 5;		// = *(int*)((char*)ptr + 8) = 5;

	std::cout << example[0] << std::endl;
	std::cout << example << std::endl;

	int* another = new int[5];	// create on heap

	for (int i = 0; i < 5; i++)
		another[i] = 2;
	delete[] another;

	Entity e;


	std::cin.get();
}