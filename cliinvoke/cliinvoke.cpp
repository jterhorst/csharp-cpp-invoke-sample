// cliinvoke.cpp : main project file.

#include "stdafx.h"

using namespace System;
using namespace cliwrapper;

int main(array<System::String ^> ^args)
{
	cliwrapper::wrapper ^clisample;
	clisample = gcnew cliwrapper::wrapper;
	String^ input;
	input = gcnew String("");
	while (true)
	{
		input=Console::ReadLine();
		Console::WriteLine(clisample->Eval(input));
	}
    return 0;
}
