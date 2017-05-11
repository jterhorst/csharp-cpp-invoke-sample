// win32invoke.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
#include"unmanaged.h"
using namespace std;

int main()
{
	Cunmanaged unmanaged;
	string input;
	while (cin >> input)
	{
		cout << unmanaged.Eval(input) << endl;
	}
    return 0;
}

