#pragma once
#include "Factory.h"
#include <memory>

class CConcreteFactoryA : public CFactory{
public:
	CConcreteFactoryA(){}
	~CConcreteFactoryA(){}

public:
	virtual std::shared_ptr<CProduct> CreateProduct();
};