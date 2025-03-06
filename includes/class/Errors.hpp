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