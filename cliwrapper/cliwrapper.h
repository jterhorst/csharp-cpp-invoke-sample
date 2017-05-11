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
		double Eval(String^ x)
		{
			string input = "";
			MarshalString(x, input);
			return ptr->Eval(input);
		}
	private:
		void MarshalString(String ^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
		Cunmanaged *ptr;
		// TODO: Add your methods for this class here.
	};
}
