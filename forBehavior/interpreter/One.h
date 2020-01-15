#include "RomanNumberInterpreter.h"

class COne : public CRomanNumberInterpreter{
public:
	COne(int n):CRomanNumberInterpreter(n){}
	virtual ~COne(){}

	char one()
	{
		return 'I';
	}

	char* four()
	{
		return "IV";
	}

	char five()
	{
		return 'V';
	}

	char* nine()
	{
		return "IX";
	}

	int multiplier()
	{
		return 1;
	}

private:
	COne();
};