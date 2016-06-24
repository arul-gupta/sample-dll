#include "stdafx.h"


#define MATHLIBRARY_API __declspec(dllexport) 


// Returns a + b

MATHLIBRARY_API double Add(double a, double b)
{
	return a + b;
}
