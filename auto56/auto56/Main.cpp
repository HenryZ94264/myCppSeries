#include <iostream>
#include <string>
#include <unordered_map>

class Devices {};

class DeviceManager
{
private:
	std::unordered_map<std::string, std::vector<Devices*>> m_Devices;
public:
	const std::unordered_map<std::string, std::vector<Devices*>>& GetDevices() const
	{
		return m_Devices;
	}
};

int main()
{
	auto a = (std::string)"Cherno";

	DeviceManager dm;

	const auto& devices = dm.GetDevices();


	std::cin.get();
}