#pragma once

#include <iostream>
class Complex
{
	public:
		float real;
		float imaginary;

		Complex(void);
		Complex(float real, float imaginary);
		Complex(float real);
		~Complex(void);

		Complex &operator=(const Complex &other);
		Complex operator+(const Complex &other) const;
		Complex operator-(const Complex &other) const;
		Complex operator*(const Complex &other) const;
		Complex operator/(const Complex &other) const;	
		Complex &operator+=(const Complex &other);
		Complex &operator-=(const Complex &other);
		Complex &operator*=(const Complex &other);
		Complex &operator/=(const Complex &other);
};

std::ostream &operator<<(std::ostream &os, const Complex &complex);