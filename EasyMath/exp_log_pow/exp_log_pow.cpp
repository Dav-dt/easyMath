#include "exp_log_pow.h"

long long EasyMathUseful::pow(const long long& x, const long long& n)
{
	long long temp = 0;
	if (n == 1)
	{
		return 1;
	}
	temp = EasyMathUseful::pow(x, static_cast<long long>(n / 2));

	if (n %2 == 0)
	{
		return (temp * temp);
	}
	else
	{
		return (x * temp * temp);
	}
}

long long EasyMathUseful::exp(const long long& num)
{
	return EasyMathUseful::pow(EasyMathUseful::e, num);
}

long long EasyMathUseful::exp2(const long long& num)
{
	return EasyMathUseful::pow(2, num);
}

long long EasyMathUseful::sqrt(const long long& num)
{
	return EasyMathUseful::pow(num, 1 / 2);
}
