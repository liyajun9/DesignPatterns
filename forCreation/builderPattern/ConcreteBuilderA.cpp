#include "pch.h"
#include "ConcreteBuilderA.h"
#include "ComplexProduct.h"

CConcreteBuilderA::CConcreteBuilderA()
{
	m_pProduct = new CComplexProduct();
}

CConcreteBuilderA::~CConcreteBuilderA()
{
	delete m_pProduct;
	m_pProduct = NULL;
}

CComplexProduct* CConcreteBuilderA::GetProduct()
{
	return m_pProduct;
}

void CConcreteBuilderA::Initialize()
{
	m_pProduct->Initialize();
}

void CConcreteBuilderA::SwitchMode()
{
	m_pProduct->SwitchMode(_T("A"));
}