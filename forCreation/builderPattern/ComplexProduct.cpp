#include "stdafx.h"
#include "ComplexProduct.h"

void CComplexProduct::Initialize()
{
	m_bInit = true;
}

void CComplexProduct::SwitchMode(tstring sMode)
{
	m_sMode = sMode;
}

void CComplexProduct::Show()
{
	std::wcout<<_T("Initialized: ")<<m_bInit<<std::endl;
	std::wcout<<_T("Mode: ")<<m_sMode<<std::endl;
}