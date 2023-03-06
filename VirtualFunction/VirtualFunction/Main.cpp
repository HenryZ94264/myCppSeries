#include <iostream>
#include <string>

class Printable
{
public:
	virtual std::string GetClassName() = 0;
};

class Entity: public Printable
{
public:
	virtual std::string GetName() { return "Entity"; }

	std::string GetClassName() override { return "Entity"; }
	//virtual std::string GetName() = 0;    //纯虚函数写法，必须要在子类中实现该方法才能实例化。纯虚函数其实就是C++中的接口
};

class Player : public Entity
{
private:
	std::string m_Name;
public:
	Player(const std::string & name) : m_Name(name) {}

	std::string GetName() override { return m_Name; }	//这个函数与super class-Entity中的函数重复，若要覆盖(override)它，需要将Entity的该函数改为虚函数
};

void PrintName(Entity* entity)
{
	std::cout << entity->GetName() << std::endl;
}



void Print(Printable* obj)
{
	std::cout << obj->GetClassName() << std::endl;
}

int main()
{
	Entity* e = new Entity();
	//PrintName(e);

	Player* p = new Player("Henry");
	//PrintName(p);

	Print(e);
	Print(p);


	std::cin.get();
}