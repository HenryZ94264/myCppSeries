#include <iostream>

#define LOG(x) std::cout << x << std::endl;

#define struct class //define struct to class

class Player	// the differenece between class and struct is class is private default and struct is public 
{
public:
	int x, y;
	int speed;

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}

};

class Log
{
public:
	enum Level
	{
		LevelError=0, LevelWarning, LevelInfo
	};

private:
	Level m_LogLevel = LevelInfo;
public:
	void SetLevel(Level level)
	{
		m_LogLevel = level;
	}

	void Warn(const char* message)
	{	
		if (m_LogLevel >= LevelWarning)
			std::cout << "[WARNING]: " << message << std::endl;
	}

	void Error(const char* message)
	{	
		if (m_LogLevel >= LevelError)
			std::cout << "[ERROR]: " << message << std::endl;
	}

	void Info(const char* message)
	{
		if (m_LogLevel >= LevelInfo)
			std::cout << "[INFO]: " << message << std::endl;
	}
};


int main()
{

	//Player player1;
	//player1.Move(1, -1);
	//player1.x = 5;

	Log log;
	log.SetLevel(Log::LevelError);
	log.Warn("Hello!");
	log.Info("Hello!");
	log.Error("Hello!");


	std::cin.get();
}