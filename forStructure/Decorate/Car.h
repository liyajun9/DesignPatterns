#pragma once
#include "..\ttype.h"

class CCar{
public:
	CCar(){}
	virtual ~CCar(){}

	virtual void Show() = 0;
};