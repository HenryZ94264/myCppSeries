#include <iostream>
#include <string>

struct Vector2
{
	float x, y;
};

class String
{
private:
	char* m_Buffer;
	unsigned int m_Size;
public:
	String(const char* string)
	{
		m_Size = strlen(string);
		m_Buffer = new char[m_Size + 1];
		memcpy(m_Buffer, string, m_Size);
		m_Buffer[m_Size] = 0;
	}

	////c++会自动实现一个copy constructor，用于拷贝当前类
	//// 实现1.
	//String(const String& other) : m_Buffer(other.m_Buffer), m_Size(other.m_Size){}
	//// 实现2.
	//String(const String& other)
	//{
	//	memcpy(this, &other, sizeof(String));
	//}
	//// 若不想启用copy constructor，即不想该类被复制，则将copy constructor删除即可
	////String(const String& other) = delete;

	//// 深拷贝
	//String(const String& other) : m_Size(other.m_Size)
	//{
	//	m_Buffer = new char[m_Size+1];
	//	memcpy(m_Buffer, other.m_Buffer, m_Size + 1);
	//}

	~String()
	{
		delete[] m_Buffer;
	}

	char& operator[](unsigned int index)
	{
		return m_Buffer[index];
	}

	friend std::ostream& operator<<(std::ostream& stream, const String& string);
};

std::ostream& operator<<(std::ostream& stream, const String& string)
{
	stream << string.m_Buffer;
	return stream;
}

int main()
{
	Vector2* a = new Vector2();
	Vector2* b = a;
	b++;

	String string = "Henry";
	String second = string;

	second[1] = 'a';

	std::cout << string << std::endl;
	std::cout << second << std::endl;

	std::cin.get();
}