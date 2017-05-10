// cliinvoke.cpp : main project file.

#include "stdafx.h"

using namespace System;
using namespace cliwrapper;

int main(array<System::String ^> ^args)
{
	cliwrapper::wrapper ^clisample;
	clisample = gcnew cliwrapper::wrapper;
    Console::WriteLine(clisample->Add(1.1,2.2));
	Console::WriteLine(clisample->Subtract(1.1, 2.2));
	Console::WriteLine(clisample->Multiply(1.1, 2.2));
    return 0;
}
