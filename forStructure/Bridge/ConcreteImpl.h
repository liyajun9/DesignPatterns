#pragma once
#include "AbstractImpl.h"

class CConcreteImpl : public CAbstractionImp{
public:
	virtual ~CConcreteImpl(){}

	virtual void OperationImp();
};