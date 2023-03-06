#include <iostream>
#include <string>

/*
initializerList 能够保证性能最大化，而不会浪费性能

*/

class Example
{
public:
	Example()
	{
		std::cout << "Created Example！" << std::endl;
	}

	Example(int x)
	{
		std::cout << "Created Example with " << x << "!" << std::endl;
	}
};

class Entity
{
private:
	int m_Score;
	std::string m_Name;
	Example example;
public:
	Entity()
		: m_Score(2), m_Name("Unknown"), example(9) 	//	顺序要和声明中的顺序一致
	{
		//m_Name = "Unknown";		//实际上就是将等号用括号代替，简化代码
		//m_Score = 2;
		//Example example(9);		// private中被create了一次，接着在这里丢掉了之前create的，然后重新create了一个，造成了性能浪费，如果写到initializerList中不会有这个问题
	}


	Entity(const std::string& name)
		: m_Name(name)
	{
	}

	const std::string& GetName() const { return m_Name; }


}; 

int main()
{
	Entity e0;
	std::cout << e0.GetName() << std::endl;

	//Entity e1("Henry");
	//std::cout << e1.GetName() << std::endl;

	std::cin.get();
}