#include <iostream>
#include <string>

/*
1. Stack速度快，无需自己释放内存，但是空间小，作用范围有限
2. Heap空间大，可以跨作用范围，但是速度慢，需要delete来保证不会发生内存泄漏
*/

using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown") {}
	Entity(const String& name) : m_Name(name) {}

	const String& GetName() const { return m_Name; }
}; 

int main()
{
	/*Entity* e;
	{
		Entity* entity = new Entity("Henry");
		e = entity;
		std::cout << entity->GetName() << std::endl;
	}

	std::cin.get();
	delete e;*/

	//new KEYWORD
	int a = 2;
	int* b = new int[50]; //200 bytes

	Entity* e = new Entity();
	//Entity* e1 = (Entity*)malloc(sizeof(Entity));	//与上一行不同的是，该操作只分配内存，而没有初始化Entity(调用构造函数)

	Entity* e_placement = new(b) Entity();	//可以规定e_placement所分配的内存的位置，new(b)代表内存位置在b

	delete[] b;	//delete和new性质一样，在释放内存的同时，还调用了类的deconstructor
	delete e;

	std::cin.get();
}