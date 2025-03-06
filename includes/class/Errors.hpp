#pragma once

#include "commons.hpp"

class IncompatibleSizeException : public std::exception
{
	public:
		const char *what() const throw()
		{
			return "Incompatible size";
		}
};

class InvalidSizeException : public std::exception
{
	public:
		const char *what() const throw()
		{
			return "Invalid size";
		}
};

class NotSquareMatrixException : public std::exception
{
	public:
		const char *what() const throw()
		{
			return "Not a square matrix";
		}
};