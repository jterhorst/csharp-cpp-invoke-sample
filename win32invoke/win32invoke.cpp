// win32invoke.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"unmanaged.h"
using namespace std;

int main()
{
	Cunmanaged unmanaged;
	cout << unmanaged.Add(1.1, 2.2) << endl;
	cout << unmanaged.Subtract(1.1, 2.2) << endl;
	cout << unmanaged.Multiply(1.1, 2.2) << endl;
    return 0;
}

