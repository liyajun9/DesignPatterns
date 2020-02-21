#include "pch.h"
#include "ConcreteFactoryA.h"
#include "ConcreteProductA.h"

CProduct* CConcreteFactoryA::CreateProduct()
{
	return new CConcreteProductA();
}