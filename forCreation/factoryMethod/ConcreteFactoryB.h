#pragma once
#include "Factory.h"
#include <memory>

class CConcreteFactoryB : public CFactory{
public:
	CConcreteFactoryB(){}
	~CConcreteFactoryB(){}

public:
	virtual CProduct* CreateProduct();
};