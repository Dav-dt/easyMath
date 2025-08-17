#pragma once
#include <cmath>
#include <iostream>
class Complex
{
public:

	int real;
	int imaginary;
	unsigned int module;

	Complex(int re, int im);
	~Complex();

	bool isReal();
	bool isImaginary();
	Complex conjugate();
	void display();

	//TODO add operators

private:
	
};