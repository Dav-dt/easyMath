#include "probability.h"

int EasyMathProbability::fibonacci(const int& n)
{
	if (n <=2) { return 1; }
	
	return EasyMathProbability::fibonacci(n - 2) + EasyMathProbability::fibonacci(n - 1);
}

int EasyMathProbability::binomialCoefficient(const unsigned int& n, const unsigned int& k)
{
	assert(n >= k);
	return static_cast<int>((EasyMathProbability::factorial(n) / 
		((EasyMathProbability::factorial(k) * EasyMathProbability::factorial(n - k)))));
}

double EasyMathProbability::binomial(const double& probability, const int& successes, const int& cases)
{
	assert(successes <= cases);
	return EasyMathProbability::binomialCoefficient(cases,successes)*pow(probability,successes)*
		pow((1 - probability), cases - successes);
}
