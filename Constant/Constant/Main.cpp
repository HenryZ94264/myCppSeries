#include <iostream>


class Entity
{
private:
	int m_Y, m_X=0;
	mutable int mutable_var;	//mutable与const是相反的，永远可变（包括在const方法中），经典的应用场景是测试一个方法被调用了多少次
public:
	int GetX() const		//const表示该方法是read only, 不会修改成员变量的值
	{
		mutable_var = 2;
		return m_X;
	}

	void SetX(int x)
	{
		m_X = x;
	}
};

class Player : public Entity
{
private:
	std::string m_Name;
	mutable int m_DebugCount = 0;
public:
	const std::string& GetName() const 
	{
		m_DebugCount++;
		return m_Name; 
	}

	const int PrintDebugCount() const
	{
		return m_DebugCount;
	}

};

void PrintEntity(const Entity& e)
{
	//e.SetX(1);		// const Entity 无法调用非const的方法
	std::cout << e.GetX() << std::endl;
}

int main()
{

	const int MAX_AGE = 90;

	//int* const a = new int;		//从右向左读：* const 是一个常数指针，因此指针所保存的地址不能变
	const int* a = new int;		//           const int* 指针指向的是一个常数int，因此int（即指针指向的内容）不能变
	//int const* a = new int;
	//const int* const a = new int;	//			* const 是常数指针, const int是一个常数，因此指针是常数，该指针指向的内容也是常数，因此都不能改变
	
	//*a = 2;
	a = (int*)&MAX_AGE;

	std::cout << *a << std::endl;
	//delete a;

	Entity e;
	PrintEntity(e);

	const Player p;
	for (int i = 0; i < 5; i++)
		p.GetName();
	std::cout << p.PrintDebugCount() << std::endl;

	int x = 8;
	auto f = [=]() mutable
	{
		x++;
		std::cout << x << std::endl;
	};
	f();
	// x = 8

	std::cin.get();
}