#include "complex.h"


Complex::Complex(int re, int im)
{
	real = re;
	imaginary = im;
}

Complex::~Complex()
{

}

int Complex::getRe() const
{
	return real;
}

int Complex::getIm() const
{
	return imaginary;
}

bool Complex::isReal() const
{
	return (imaginary == 0);
}

bool Complex::isImaginary() const
{
	return (real == 0);
}

Complex Complex::conjugate()
{
	return Complex(real, -imaginary);
}

void Complex::display() const
{
	std::cout << "z =" << real << "+" << imaginary << "i" << std::endl;
}

double Complex::getModulus() const
{
	return std::sqrt(pow(real, 2) + pow(imaginary, 2));
}