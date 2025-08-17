#pragma once
#include <vector>

template <typename T>
double average(const std::vector<T>& nums)
{

	double res = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		res += nums[i];
	}

	return res / nums.size();
}

