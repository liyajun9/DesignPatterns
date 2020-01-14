#pragma once
#include "Algorithm.h"

class CConcreteAlgorithmC : public CAlgorithm{
public:
	virtual ~CConcreteAlgorithmC(){}

	virtual int Calculate();
};