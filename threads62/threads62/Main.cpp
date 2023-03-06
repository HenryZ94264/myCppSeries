#include <iostream>
#include <thread>

static bool s_Finished = false;

void DoWork()
{
	using namespace std::literals::chrono_literals;

	std::cout << "Starting Thread ID = " << std::this_thread::get_id() << std::endl;

	while (!s_Finished)
	{
		std::cout << "Working..." << std::endl;
		std::this_thread::sleep_for(1s);
	}
	std::cout << "Thread " << std::this_thread::get_id() << " is finished..." << std::endl;

}

int main()
{
	std::thread worker(DoWork);		// 传入函数指针
	
	for (int i = 0; i < 10; i++)
	{
		using namespace std::literals::chrono_literals;
		std::cout << "MainThread..." << std::endl;
		std::this_thread::sleep_for(1s);
	}
	std::cin.get();
	s_Finished = true;

	worker.join();

	std::cin.get();
}