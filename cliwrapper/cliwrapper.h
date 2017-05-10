// cliwrapper.h

#pragma once
#include"unmanaged.h"
#include<string>

using namespace std;
using namespace System;

namespace cliwrapper 
{

	public ref class wrapper
	{
	public:
		wrapper() { ptr = new Cunmanaged; }
		~wrapper() { this->!wrapper(); }
		!wrapper() { delete ptr; }
		double Add(double a, double b)
		{
			return ptr->Add(a, b);
		}
		double Subtract(double a, double b)
		{
			return ptr->Subtract(a, b);
		}
		double Multiply(double a, double b)
		{
			return ptr->Multiply(a, b);
		}
		double Divide(double a, double b)
		{
			return ptr->Divide(a, b);
		}
		String^ Print()
		{
			String^ str = gcnew String(ptr->Print().c_str());
			return str;
		}
	private:
		Cunmanaged *ptr;
		// TODO: Add your methods for this class here.
	};
}
