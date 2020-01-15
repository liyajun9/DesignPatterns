#include "stdafx.h"
#include "RomanNumberInterpreter.h"
#include "Thousand.h"
#include "Hundred.h"
#include "Ten.h"
#include "One.h"

CRomanNumberInterpreter::CRomanNumberInterpreter()
{
	m_pThousandsInterpreter = new CThousand(1);
	m_pHundredsInterpreter = new CHundred(1);
	m_pTensInterpreter = new CTen(1);
	m_pOnesInterpreter = new COne(1);
}

CRomanNumberInterpreter::~CRomanNumberInterpreter()
{
	delete m_pThousandsInterpreter;
	delete m_pHundredsInterpreter;
	delete m_pTensInterpreter;
	delete m_pOnesInterpreter;
}

void CRomanNumberInterpreter::interpret(char* input, int& total)
{
	int nIndex(0);

	if(!strncmp(input, nine(), 2)){
		total += 9 * multiplier();
		nIndex += 2;
	}
	else if(!strncmp(input, four(), 2)){
		total += 4 * multiplier();
		nIndex += 2;
	}
	else{
		if(input[0] == five()){
			total += 5 * multiplier();
			nIndex += 1;
		}
		else
			nIndex = 0;

		for(unsigned int i = nIndex + 3; i > nIndex; nIndex ++)
			if(input[nIndex] == one())
				total += 1 * multiplier();
			else
				break;
	}
	strcpy(input, &(input[nIndex]));
}

int CRomanNumberInterpreter::interpret(char* input)
{
	int nTotal(0);
	m_pThousandsInterpreter->interpret(input, nTotal);
	m_pHundredsInterpreter->interpret(input, nTotal);
	m_pTensInterpreter->interpret(input, nTotal);
	m_pOnesInterpreter->interpret(input, nTotal);

	if(strcmp(input, ""))
		return 0;
	return nTotal;
}