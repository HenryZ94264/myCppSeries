#include <iostream>
#include <string>

using String = std::string;

/*
关于stack和heap在速度和大小的知识点在CreateInstantiateObject
stack上创建的object，在作用范围结束后会自动释放
*/

class Entity
{
public:
	Entity()
	{
		std::cout << "Created Entity!" << std::endl;
	}

	~Entity()
	{
		std::cout << "Destroyed Entity!" << std::endl;
	}
};

class ScopedPtr
{
private:
	Entity* m_Ptr;
public:
	ScopedPtr(Entity* ptr) : m_Ptr(ptr) {}

	~ScopedPtr()
	{
		delete m_Ptr;
	}
};

int main()
{
	{
		ScopedPtr e1(new Entity());
		Entity* e = new Entity();
	}


	std::cin.get();
}