#pragma once
#include "..\..\..\YJ_WinTools\Log\tstring.h"

class CComplexProduct{
public:
	CComplexProduct():m_bInit(false){}
	virtual ~CComplexProduct(){};

	void Initialize();
	void SwitchMode(tstring sMode);
	
	void Show();

private:
	bool m_bInit;
	tstring m_sMode;
};