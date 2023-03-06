#include <iostream>

class Entity
{
	/*
	使用户无法初始化实例
	1. 将constructor放到private
	2. delete constructor
	*/

//private:
//	Entity(){}
public:
	float X, Y;
		
	//Entity() = delete;
	Entity()
	{
		X = 0.0f;
		Y = 0.0f;
		std::cout << "Created Entity!" << std::endl;
	}

	/*Entity(float x, float y)
	{
		X = x;
		Y = y;
	}*/
	
	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}

	void Print()
	{
		std::cout << X << ", " << Y << std::endl;
	}

};

void Function()
{
	Entity e;
	e.Print();
}

int main()
{
	Function();
	//Entity e1(10.0f, 5.0f);
	//e1.Print();

	std::cin.get();
}