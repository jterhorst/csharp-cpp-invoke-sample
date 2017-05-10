// unmanaged.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "unmanaged.h"


// This is an example of an exported variable
UNMANAGED_API int nunmanaged=0;

// This is an example of an exported function.
UNMANAGED_API int fnunmanaged(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see unmanaged.h for the class definition
Cunmanaged::Cunmanaged()
{
    return;
}

double Cunmanaged::Add(double a, double b)
{
	return a+b;
}

double Cunmanaged::Subtract(double a, double b)
{
	return a-b;
}

double Cunmanaged::Multiply(double a, double b)
{
	return a*b;
}
