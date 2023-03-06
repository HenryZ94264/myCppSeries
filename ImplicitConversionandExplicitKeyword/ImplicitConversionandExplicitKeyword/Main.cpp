#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
	String m_Name;
	int m_Age;
public:
	Entity(const String& name) : m_Name(name), m_Age(-1) {}
	explicit Entity(int age) : m_Name("Unknown"), m_Age(age) {}
};

void PrintEntity(const Entity& entity)
{

}

int main()
{
	// c++只允许一次implicit conversion
	PrintEntity(23);
	PrintEntity(Entity("Henry"));

	// 通过隐式转换来调用构造函数
	Entity a = String("Henry");
	Entity b = 23;



	std::cin.get();
}