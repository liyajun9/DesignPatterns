#pragma once
#include "Algorithm.h"

class CConcreteAlgorithmB : public CAlgorithm{
public:
	virtual ~CConcreteAlgorithmB(){}

	virtual int Calculate();
};