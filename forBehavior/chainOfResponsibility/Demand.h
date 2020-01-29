#pragma once
#include "ttype.h"

class CDemand{
public:
	CDemand(tstring sName, tstring sType):m_sName(sName), m_sType(sType){}

	tstring GetType() const{ return m_sType; }
	tstring GetName() const{ return m_sName; }

private:
	CDemand();
	tstring m_sName;
	tstring m_sType;
};