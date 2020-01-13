#pragma once
#include "Factory.h"
#include <memory>

class CConcreteFactoryA : public CFactory{
public:
	CConcreteFactoryA(){}
	~CConcreteFactoryA(){}

public:
	virtual CProduct* CreateProduct();
};