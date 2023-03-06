#include <iostream>
#include <string>
#include <memory>

/*
优先使用unique pointer，其次考虑使用shared pointer
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

	void Print(){}
};

int main()
{
	//unique pointer
	{
		std::unique_ptr<Entity> entity = std::make_unique<Entity>();
		entity->Print();
	}

	//shared pointer
	{
		std::shared_ptr<Entity> e0;
		{
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			e0 = sharedEntity;
		}
		// 退出当前作用域后，因为还有一个pointer(e0)指向该entity，因此entity还没有被destroy
	}

	//weak pointer，不会增加指向内存的pointer计数
	{
		std::weak_ptr<Entity> e0;
		{
			std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();
			e0 = sharedEntity;
		}
		// 退出当前作用域后，计数为0，因此destroy entity
	}

	std::cin.get();
}