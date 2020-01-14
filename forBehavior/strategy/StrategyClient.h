#pragma once
#include "Algorithm.h"

class CStrategyClient{
public:
	CStrategyClient(CAlgorithm *pAlgorithm):m_pAlgorithm(pAlgorithm){}
	int DoCalculation();

	void SetAlgorithm(CAlgorithm* pAlgorithm);

private:
	CStrategyClient();
	CAlgorithm* m_pAlgorithm;
};