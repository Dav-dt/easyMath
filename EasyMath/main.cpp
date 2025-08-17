#include "complex/complex.h"
#include "probability/probability.h"

#include <iostream>

template <typename T>
static void println(const T& word)
{
	std::cout << word << std::endl;
}

int main()
{
	std::vector<int> test = { 1, 2, 2, 4 };
	println(average(test));
	return 0;
}