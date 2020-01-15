#include "RomanNumberInterpreter.h"

class CHundred : public CRomanNumberInterpreter{
public:
	CHundred(int n):CRomanNumberInterpreter(n){}
	virtual ~CHundred(){}

	char one()
	{
		return 'C';
	}

	char* four()
	{
		return "CD";
	}

	char five()
	{
		return 'D';
	}

	char* nine()
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