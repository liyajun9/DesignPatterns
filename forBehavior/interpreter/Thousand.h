#pragma once
#include "RomanNumberInterpreter.h"

class CThousand : public CRomanNumberInterpreter{
public:
	CThousand(int n):CRomanNumberInterpreter(n){}
	virtual ~CThousand(){}

	const char one()
	{
		return 'M';
	}

	const char* four()
	{
		return "";
	}

	const char five()
	{
		return '\0';
	}

	const char* nine()
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