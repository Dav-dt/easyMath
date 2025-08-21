#pragma once
#include <vector>

namespace EasyMathNumberTheory
{

	constexpr int factorial(const unsigned int& n)
	{
		if (n == 0) { return 1; }

		return factorial(n - 1) * n;
	}

	constexpr int gcd(const int& a, const int& b)
	{
		return (b == 0) ? a : gcd(b, a % b);
	}

	constexpr int gcd(const std::vector<int>& nums) //TODO
	{
		return 0;
	}

	constexpr int lcm(const int& a, const int& b)
	{
		if (a == 0 || b == 0)
		{
			return 0;
		}
		int divA = a, divB = b;
		while (divA != divB)
		{
			if (divA < divB)
			{
				divA += a;
			}
			else
			{
				divB += b;
			}
		}
		return divA;
	}

	constexpr int lcm(const std::vector<int>& numbers) //TODO
	{
		return 0;
	}

	constexpr int comb(const int& n, const int& k)
	{
		if (k > n)
		{
			return 0;
		}

		return (factorial(n) / ((factorial(k) * factorial(n - k))));
	}

	constexpr int perm(const int& n, const int& k)
	{
		if (k > n)
		{
			return 0;
		}

		return (factorial(n) / factorial(n-k));
	}
}