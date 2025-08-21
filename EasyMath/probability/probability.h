#pragma once
#include <vector>
#include <cassert>

namespace EasyMathProbability
{

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

	constexpr int factorial(const unsigned int& n)
	{
		if (n == 0) { return 1; }

		return factorial(n - 1) * n;
	}

	int fibonacci(const int& n);
	int binomialCoefficient(const unsigned int& n, const unsigned int& k);
	double binomial(const double& probability, const int& successes, const int& cases);

}