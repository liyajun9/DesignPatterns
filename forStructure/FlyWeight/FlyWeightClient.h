#pragma once
#include <map>
#include "FlyWeight.h"
#include <memory>

class CFlyWeightClient{
public:
	void AddFlyWeight(EXDATA exData, int data1, int data2, int data3);
	void ShowAllFlyWeights();
	int GetSize() const;

private:
	std::map<EXDATA, std::weak_ptr<CFlyWeight>> m_mapExdata;
};