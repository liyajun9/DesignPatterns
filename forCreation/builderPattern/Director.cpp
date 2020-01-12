#include "stdafx.h"
#include "Director.h"

CDirector::CDirector(CBuilder* pBuilder):m_pBuilder(pBuilder)
{

}

CDirector::~CDirector()
{
	delete m_pBuilder;
	m_pBuilder = NULL;
}

void CDirector::Construct()
{
	m_pBuilder->Initialize();
	m_pBuilder->SwitchMode();
}

CComplexProduct* CDirector::GetProduct()
{
	return m_pBuilder->GetProduct();
}