#pragma once
#include "TargetInterface.h"
#include "CurrClass.h"

class CAdapter : public CTargetInterface{
public:
	CAdapter(CCurrClass* pCurrClass);
	virtual ~CAdapter();

	virtual void Request();

private:
	CAdapter();
	CCurrClass* m_pCurrClass;
};