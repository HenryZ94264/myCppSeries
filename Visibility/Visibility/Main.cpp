#include <iostream>
#include <string>


/*
1. private成员只能在类内和友元中访问，除此之外其他都无法访问（包括子类）
2. protected成员能够被继承类访问，但是无法被main函数访问
3. public可以被任何函数访问
*/

class Entity
{
protected:
	int X, Y;

	void Print() {}

public:
	Entity()
	{
		X = 0;
		Print();
	}

};

class Player : public Entity
{
public:
	Player()
	{
		X = 2;
		Print();
	}
};


int main()
{
	Entity e;
	e.X = 2;

	std::cin.get();
}