#pragma once
#include "..\..\..\YJ_WinTools\Log\tstring.h"

/*Roman numbers Grammar:
romanNumeral :={thouands} {hundreds} {tens} {ones}
thousands, hundreds, tens, ones ::= nine | four | {five}{one}{one}{one}
nine::= "CM"|"XC"|"IX"
four::="CD"|"XL"|"IV"
five::='D'|'L'|'V'
one::='M'|'C'|'X'|'I'
*/

class CThousand;
class CHundred;
class CTen;
class COne;
class CRomanNumberInterpreter{
public:
	CRomanNumberInterpreter();
	CRomanNumberInterpreter(int n){}   //�˹��캯���Ǹ��������õģ�������������ѭ��(��Ĭ��ctor�ᴴ�����������)
	~CRomanNumberInterpreter();

	int interpret(char*);
	virtual void interpret(char* input, int& total);

protected:
	virtual char one(){ return '\0';}
	virtual char* four(){ return NULL;}
	virtual char five(){ return '\0';}
	virtual char* nine(){ return NULL; }
	virtual int multiplier(){ return 0; }

private:
	CRomanNumberInterpreter* m_pThousandsInterpreter;
	CRomanNumberInterpreter* m_pHundredsInterpreter;
	CRomanNumberInterpreter* m_pTensInterpreter;
	CRomanNumberInterpreter* m_pOnesInterpreter;
};