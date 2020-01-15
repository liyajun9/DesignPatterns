#pragma once
#include "RomanNumberInterpreter.h"

class CThousand : public CRomanNumberInterpreter{
public:
	CThousand(int n):CRomanNumberInterpreter(n){}
	virtual ~CThousand(){}

	char one()
	{
		return 'M';
	}

	char* four()
	{
		return "";
	}

	char five()
	{
		return '\0';
	}

	char* nine()
	{
		return "";
	}

	int multiplier()
	{
		return 1000;
	}

private:
	CThousand();
};