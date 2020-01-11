#pragma once
#include "Product.h"

class CConcreteProductA : public CProduct{
public:
	CConcreteProductA(){}
	virtual ~CConcreteProductA(){}

	virtual void play();
};