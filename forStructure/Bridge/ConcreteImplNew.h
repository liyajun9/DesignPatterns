#pragma once
#include "AbstractImpl.h"

class CConcreteImplNew : public CAbstractionImp{
public:
	virtual void OperationImp();

	void BefOperate();
	void AftOperate();
};
