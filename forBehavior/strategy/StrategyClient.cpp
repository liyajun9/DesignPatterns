#include "stdafx.h"
#include "StrategyClient.h"

int CStrategyClient::DoCalculation()
{
	int nRet(-1);
	if(m_pAlgorithm)
		nRet = m_pAlgorithm->Calculate();

	std::wcout<<_T("Result is : ")<<nRet<<std::endl;
	return nRet;
}

void CStrategyClient::SetAlgorithm(CAlgorithm* pAlgorithm)
{
	m_pAlgorithm = pAlgorithm;
}