// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the UNMANAGED_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// UNMANAGED_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef UNMANAGED_EXPORTS
#define UNMANAGED_API __declspec(dllexport)
#else
#define UNMANAGED_API __declspec(dllimport)
#endif
#include<string>
// This class is exported from the unmanaged.dll
class UNMANAGED_API Cunmanaged {
public:
	Cunmanaged(void);
	double Add(double, double);
	double Subtract(double, double);
	double Multiply(double, double);
	double Divide(double, double);
	std::string Print(void);
	// TODO: add your methods here.
};

extern UNMANAGED_API int nunmanaged;

UNMANAGED_API int fnunmanaged(void);
