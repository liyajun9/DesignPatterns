#pragma once
#include "Algorithm.h"

class CConcreteAlgorithmA : public CAlgorithm{
public:
	virtual ~CConcreteAlgorithmA(){}

	virtual int Calculate();
};