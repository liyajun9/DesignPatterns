#pragma once
#include "AbstractOwner.h"

class CDeveloper : public CAbstractOwner{
public:
	virtual ~CDeveloper(){}

	virtual void Handle(const CDemand& demand);
};