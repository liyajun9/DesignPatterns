#pragma once
#include "AbstractOwner.h"

class CSupervisor : public CAbstractOwner{
public:
	virtual ~CSupervisor(){}

	virtual void Handle(const CDemand& demand);
};