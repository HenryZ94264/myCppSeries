#include <iostream>
#include <chrono>

class Timer
{
private:
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;
public:
	Timer()
	{
		start = std::chrono::high_resolution_clock::now();
	}

	~Timer()
	{
		end = std::chrono::high_resolution_clock::now();
		duration = end - start;
		float ms = duration.count() * 1000.0f;
		std::cout << "Time consuming " << ms << "ms!\n";
	}
};

int main()
{
	auto start = std::chrono::high_resolution_clock::now();
	int* a = new int[50];
	delete[] a;

	int** array2d = new int*[1000];
	for (int i = 0; i < 1000; i++)
		array2d[i] = new int[1000];

	{
		Timer timer;
		for (int i = 0; i < 1000; i++)
		{
			for (int j = 0; j < 1000; j++)
			{
				array2d[i][j] = 0;
			}
		}
	}

	for (int i = 0; i < 50; i++)
		delete[] array2d[i];
	delete[] array2d;

	int*** array3d = new int**[50];
	for (int i = 0; i < 50; i++)
	{
		array3d[i] = new int*[50];
		for (int j = 0; j < 50; j++)
			array3d[i][j] = new int[50];
	}
	
	for (int i = 0; i < 50; i++)
	{
		for (int j = 0; j < 50; j++)
		{
			delete[] array3d[i][j];
		}
		delete[] array3d[i];
	}
	delete[] array3d;

	int* ArrayF2d = new int[1000 * 1000];
	{
		Timer timer;
		for (int y = 0; y < 1000; y++)
		{
			for (int x = 0; x < 1000; x++)
			{
				ArrayF2d[x + y * 1000] = 0;
			}
		}
	}
	delete[] ArrayF2d;

	std::cin.get();
}