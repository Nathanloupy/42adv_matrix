#pragma once

#include "commons.hpp"

class Complex
{
	public:
		float real;
		float imaginary;

		Complex(void);
		Complex(float real, float imaginary);
		~Complex(void);

		Complex &operator=(const Complex &other);
		Complex operator+(const Complex &other) const;
		Complex operator-(const Complex &other) const;
		Complex operator*(const Complex &other) const;
		Complex operator/(const Complex &other) const;	
};