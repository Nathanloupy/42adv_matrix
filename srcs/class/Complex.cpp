#include "Complex.hpp"

Complex::Complex(void) : real(0), imaginary(0)
{
}

Complex::Complex(float real, float imaginary) : real(real), imaginary(imaginary)
{
}

Complex::Complex(float real) : real(real), imaginary(0)
{
}

Complex::~Complex(void)
{
}

Complex &Complex::operator=(const Complex &other)
{
	this->real = other.real;
	this->imaginary = other.imaginary;
	return *this;
}


Complex Complex::operator+(const Complex &other) const
{
	float real = this->real + other.real;
	float imaginary = this->imaginary + other.imaginary;
	return Complex(real, imaginary);
}

Complex Complex::operator-(const Complex &other) const
{
	float real = this->real - other.real;
	float imaginary = this->imaginary - other.imaginary;
	return Complex(real, imaginary);
}

Complex Complex::operator*(const Complex &other) const
{
	float real = this->real * other.real - this->imaginary * other.imaginary;
	float imaginary = this->real * other.imaginary + this->imaginary * other.real;
	return Complex(real, imaginary);
}

Complex Complex::operator/(const Complex &other) const
{
	float denominator = other.real * other.real + other.imaginary * other.imaginary;
	float real = (this->real * other.real + this->imaginary * other.imaginary) / denominator;
	float imaginary = (this->imaginary * other.real - this->real * other.imaginary) / denominator;
	return Complex(real, imaginary);
}

Complex &Complex::operator+=(const Complex &other)
{
	this->real += other.real;
	this->imaginary += other.imaginary;
	return *this;
}

Complex &Complex::operator-=(const Complex &other)
{
	this->real -= other.real;
	this->imaginary -= other.imaginary;
	return *this;
}

Complex &Complex::operator*=(const Complex &other)
{
	float newReal = this->real * other.real - this->imaginary * other.imaginary;
	float newImaginary = this->real * other.imaginary + this->imaginary * other.real;
	this->real = newReal;
	this->imaginary = newImaginary;
	return *this;
}

Complex &Complex::operator/=(const Complex &other)
{
	float denominator = other.real * other.real + other.imaginary * other.imaginary;
	float newReal = (this->real * other.real + this->imaginary * other.imaginary) / denominator;
	float newImaginary = (this->imaginary * other.real - this->real * other.imaginary) / denominator;
	this->real = newReal;
	this->imaginary = newImaginary;
	return *this;
}

std::ostream &operator<<(std::ostream &os, const Complex &complex)
{
	if (complex.imaginary < 0)
		os << complex.real << " - " << -complex.imaginary << "i";
	else
		os << complex.real << " + " << complex.imaginary << "i";
	return os;
}
