#include "complex.h"


Complex::Complex(int re, int im)
{
	real = re;
	imaginary = im;
	module = std::sqrt(pow(real, 2) + pow(imaginary,2));
}

Complex::~Complex()
{

}

bool Complex::isReal()
{
	return (imaginary == 0);
}

bool Complex::isImaginary()
{
	return (real == 0);
}

Complex Complex::conjugate()
{
	return Complex(real, -imaginary);
}

void Complex::display()
{
	std::cout << "z =" << real << "+" << imaginary << "i" << std::endl;
}