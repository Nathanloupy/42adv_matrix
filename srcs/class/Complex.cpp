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
	float newReal = this->real + other.real;
	float newImaginary = this->imaginary + other.imaginary;
	return Complex(newReal, newImaginary);
}

Complex Complex::operator-(const Complex &other) const
{
	float newReal = this->real - other.real;
	float newImaginary = this->imaginary - other.imaginary;
	return Complex(newReal, newImaginary);
}

Complex Complex::operator*(const Complex &other) const
{
	float newReal = this->real * other.real - this->imaginary * other.imaginary;
	float newImaginary = this->real * other.imaginary + this->imaginary * other.real;
	return Complex(newReal, newImaginary);
}

Complex Complex::operator/(const Complex &other) const
{
	float denominator = other.real * other.real + other.imaginary * other.imaginary;
	float newReal = (this->real * other.real + this->imaginary * other.imaginary) / denominator;
	float newImaginary = (this->imaginary * other.real - this->real * other.imaginary) / denominator;
	return Complex(newReal, newImaginary);
}

Complex Complex::operator+(float scalar) const
{
	Complex result = *this + Complex(scalar);
	return result;
}

Complex Complex::operator-(float scalar) const
{
	return Complex(this->real - scalar, this->imaginary);
}

Complex Complex::operator*(float scalar) const
{
	Complex result = *this * Complex(scalar);
	return result;
}

Complex Complex::operator/(float scalar) const
{
	Complex result = *this * (1.0f / scalar);
	return result;
}

bool Complex::operator==(const Complex &other) const
{
	return (this->real == other.real && this->imaginary == other.imaginary);
}

bool Complex::operator!=(const Complex &other) const
{
	return !(*this == other);
}

std::ostream &operator<<(std::ostream &os, const Complex &complex)
{
	if (complex.imaginary < 0)
		os << complex.real << " - " << -complex.imaginary << "i";
	else
		os << complex.real << " + " << complex.imaginary << "i";
	return os;
}
