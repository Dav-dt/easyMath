#pragma once
#include <cmath>
#include <iostream>

class Complex
{
private:

	int real;
	int imaginary;

public:

	Complex(int re, int im);
	~Complex();
	int getRe() const;
	int getIm() const;

	bool isReal() const;
	bool isImaginary() const;
	Complex conjugate();
	void display() const;
	double getModulus() const;

	//TODO add operators

};