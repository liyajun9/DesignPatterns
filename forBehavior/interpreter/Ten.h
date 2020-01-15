#include "RomanNumberInterpreter.h"

class CTen : public CRomanNumberInterpreter{
public:
	CTen(int n):CRomanNumberInterpreter(n){}
	virtual ~CTen(){}

	char one()
	{
		return 'X';
	}

	char* four()
	{
		return "XL";
	}

	char five()
	{
		return 'L';
	}

	char* nine()
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