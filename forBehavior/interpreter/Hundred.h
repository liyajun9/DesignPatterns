#include "RomanNumberInterpreter.h"

class CHundred : public CRomanNumberInterpreter{
public:
	CHundred(int n):CRomanNumberInterpreter(n){}
	virtual ~CHundred(){}

	const char one()
	{
		return 'C';
	}

	const char* four()
	{
		return "CD";
	}

	const char five()
	{
		return 'D';
	}

	const char* nine()
	{
		return "CM";
	}

	int multiplier()
	{
		return 100;
	}

private:
	CHundred();
};