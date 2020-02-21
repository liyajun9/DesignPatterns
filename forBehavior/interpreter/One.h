#include "RomanNumberInterpreter.h"

class COne : public CRomanNumberInterpreter{
public:
	COne(int n):CRomanNumberInterpreter(n){}
	virtual ~COne(){}

	const char one()
	{
		return 'I';
	}

	const char* four()
	{
		return "IV";
	}

	const char five()
	{
		return 'V';
	}

	const char* nine()
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