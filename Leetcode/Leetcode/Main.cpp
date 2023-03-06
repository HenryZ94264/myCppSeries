#include <iostream>
#include <vector>

int main()
{
	std::vector<int> nums = { 3,4,2,1,1,0};

	for (int i = 0; i < nums.size(); i++)
	{
		nums[i]++;
	}

	for (int i = 0; i < nums.size(); i++)
	{
		if (nums[abs(nums[i]) - 1] < 0)
			return abs(nums[i])-1;
		nums[nums[i]-1] = -(nums[nums[i]-1]);
	}

	std::cin.get();
}