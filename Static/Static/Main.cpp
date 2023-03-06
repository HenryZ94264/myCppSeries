#include <iostream>
#include "Log.h"

int s_Variable;
 
void Function();

struct Entity
{
	static int x, y;

	static void Print()		// static method 不能访问non-static variables, 因为static method 没有类实例
	{
		std::cout << x << ", " << y << std::endl;
	}
};

int Entity::x;
int Entity::y;


int main()
{
	Entity e;
	Entity::x = 3;
	Entity::y = 2;

	Entity e1;
	Entity::x = 5;
	Entity::y = 8;

	Entity::Print();
	Entity::Print();

	std::cout << s_Variable << std::endl;
	std::cin.get();
}