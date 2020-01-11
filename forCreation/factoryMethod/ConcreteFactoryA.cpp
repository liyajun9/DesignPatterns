#include "stdafx.h"
#include "ConcreteFactoryA.h"
#include "ConcreteProductA.h"

std::shared_ptr<CProduct> CConcreteFactoryA::CreateProduct()
{
	return std::make_shared<CConcreteProductA>();
}