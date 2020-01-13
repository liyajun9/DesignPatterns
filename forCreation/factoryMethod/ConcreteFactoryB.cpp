#include "stdafx.h"
#include "ConcreteFactoryB.h"
#include "ConcreteProductB.h"
#include <memory>

CProduct* CConcreteFactoryB::CreateProduct()
{
	return new CConcreteProductB();
}