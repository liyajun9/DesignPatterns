#include "pch.h"
#include "ConcreteBuilderB.h"
#include "ComplexProduct.h"

CConcreteBuilderB::CConcreteBuilderB()
{
	m_pProduct = new CComplexProduct();
}

CConcreteBuilderB::~CConcreteBuilderB()
{
	delete m_pProduct;
	m_pProduct = NULL;
}

CComplexProduct* CConcreteBuilderB::GetProduct()
{
	return m_pProduct;
}

void CConcreteBuilderB::Initialize()
{
	m_pProduct->Initialize();
}

void CConcreteBuilderB::SwitchMode()
{
	m_pProduct->SwitchMode(_T("B"));
}