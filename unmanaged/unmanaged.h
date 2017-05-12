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
#include<vector>
#include<cmath>
#include<algorithm>
#include<cctype>
#include<cmath>
#include<stdexcept>
using namespace std;
// This class is exported from the unmanaged.dll
class UNMANAGED_API Cunmanaged {
public:
	Cunmanaged(void) {};
	double Eval(string x)
	{
		input = x;
		try
		{
			for (const auto &i : x)
			{
				if ((!isdigit(i)) && (i != '.') && (i != '+') && (i != '-') && (i != '*') && (i != '/') && (i != '%') && (i != '(') && (i != ')'))
				{
					throw std::exception("Not a valid string!");
				}
			}
		}
		catch (exception err)
		{
			return 0;
		}
		return Break_expr(0, input.size() - 1);
	}
private:
	string input;
	int If_expr(int left, int right) {
		int count = 0, flag = 0;
		for (int i = left; i <= right; ++i) {
			if (input[i] == '(') {
				++count;
				flag = 1;
			}
			if (input[i] == ')')
				--count;
			if (count == 0 && (input[i] == '+' || input[i] == '-' || input[i] == '*' ||
				input[i] == '/'))
				return 0;
		}
		if (flag == 1)
			return 1;
		return 0;
	}

	int R_Find_expr(int left, int right, char tofind) {
		int count = 0;
		for (int i = right; i >= left; --i) {
			if (input[i] == ')')
				--count;
			if (input[i] == '(')
				++count;
			if (count == 0 && (input[i] == tofind))
				return i;
		}
		return -1;
	}

	double Calculate(int left, int right) {
		size_t finder = R_Find_expr(left, right, '.');
		if (finder != -1) {
			return Calculate(left, finder - 1) + pow(0.1, right - finder)*Calculate(finder + 1, right);
		}
		double result = 0;
		for (int i = left; i <= right; ++i) {
			result += input[i] - '0';
			result *= 10;
		}
		result /= 10;
		return result;
	}

	double Break_expr(int left, int right) {
		if (If_expr(left, right))
			return Break_expr(left + 1, right - 1);
		int breaker = -1, breaker1 = -1, breaker2 = -1, breaker3 = -1;
		breaker3 = R_Find_expr(left, right, '%');
		if (breaker3 != -1)
			return fmod(Break_expr(left, breaker3 - 1), Break_expr(breaker3 + 1, right));
		breaker1 = R_Find_expr(left, right, '+');
		breaker2 = R_Find_expr(left, right, '-');
		breaker = max(breaker1, breaker2);
		if (breaker != -1) {
			if (breaker1 == breaker)
				return Break_expr(left, breaker1 - 1) + Break_expr(breaker1 + 1, right);
			if (breaker2 == breaker && breaker2 != left)
				return Break_expr(left, breaker2 - 1) - Break_expr(breaker2 + 1, right);
			if (breaker2 == breaker && breaker2 == left)
				return 0 - Break_expr(breaker2 + 1, right);
		}
		breaker1 = R_Find_expr(left, right, '*');
		breaker2 = R_Find_expr(left, right, '/');
		breaker = max(breaker1, breaker2);
		if (breaker != -1) {
			if (breaker1 == breaker)
				return Break_expr(left, breaker1 - 1) * Break_expr(breaker1 + 1, right);
			if (breaker2 == breaker)
				return Break_expr(left, breaker2 - 1) / Break_expr(breaker2 + 1, right);
		}
		return Calculate(left, right);
	}

};

