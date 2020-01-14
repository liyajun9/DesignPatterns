#pragma once

class CAlgorithm{
public:
	virtual ~CAlgorithm(){}

	virtual int Calculate() = 0;
};