#pragma once
#include "Factory.h"
#include <memory>

class CConcreteFactoryB : public CFactory{
public:
	CConcreteFactoryB(){}
	~CConcreteFactoryB(){}

public:
	virtual std::shared_ptr<CProduct> CreateProduct();
};