#include <iostream>
#include <string>
#include <vector>

struct Vertex
{
	float x, y, z;

	Vertex(float x, float y, float z) : x(x), y(y), z(z) {}

	// 复制构造函数
	Vertex(const Vertex& vertex) : x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "Copied!" << std::endl;
	}
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}

int main()
{

	std::vector<Vertex> vertices;
	vertices.reserve(3);	// 保留三个位置
	vertices.emplace_back(1,2,3);	// 将参数1,2,3，传递给vector容器中的Vertex，然后原地创建
	vertices.emplace_back(4,5,6);
	vertices.emplace_back(7,8,9);

	

	std::cin.get();
}