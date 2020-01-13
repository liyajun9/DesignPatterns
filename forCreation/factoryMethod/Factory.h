#pragma once
#include "Product.h"
#include <memory>


class CFactory{
public:
	CFactory(){}
	virtual ~CFactory(){}

protected:
	virtual CProduct* CreateProduct() = 0;
};