#include "stdafx.h"
#include "ConcreteFactoryB.h"
#include "ConcreteProductB.h"
#include <memory>

std::shared_ptr<CProduct> CConcreteFactoryB::CreateProduct()
{
	return std::make_shared<CConcreteProductB>();
}