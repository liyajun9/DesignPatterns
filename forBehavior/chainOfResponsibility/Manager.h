#pragma once
#include "AbstractOwner.h"

class CManager : public CAbstractOwner{
public:
	virtual ~CManager(){}

	virtual void Handle(const CDemand& demand);
};