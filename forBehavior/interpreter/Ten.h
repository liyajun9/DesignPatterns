#include "RomanNumberInterpreter.h"

class CTen : public CRomanNumberInterpreter{
public:
	CTen(int n):CRomanNumberInterpreter(n){}
	virtual ~CTen(){}

	const char one()
	{
		return 'X';
	}

	const char* four()
	{
		return "XL";
	}

	const char five()
	{
		return 'L';
	}

	const char* nine()
	{
		return "XC";
	}

	int multiplier()
	{
		return 10;
	}

private:
	CTen();
};