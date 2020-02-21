#include "pch.h"
#include "Adapter.h"

CAdapter::CAdapter(CCurrClass* pCurrClass):m_pCurrClass(pCurrClass)
{
	
}

CAdapter::~CAdapter()
{

}

void CAdapter::Request()
{
	m_pCurrClass->SpecificRequest();
}
