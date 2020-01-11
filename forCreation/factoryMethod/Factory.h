#pragma once
#include "Product.h"
#include <memory>


class CFactory{
public:
	CFactory(){}
	virtual ~CFactory(){}

protected:
	virtual std::shared_ptr<CProduct> CreateProduct() = 0;
};