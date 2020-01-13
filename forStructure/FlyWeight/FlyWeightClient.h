#pragma once
#include <map>
#include "FlyWeight.h"
#include <memory>

using namespace std;
class CFlyWeightClient{
public:
	void AddFlyWeight(EXDATA exData, int data1, int data2, int data3);
	void ShowAllFlyWeights();
	int GetSize() const;

private:
	map<EXDATA, weak_ptr<CFlyWeight>> m_mapExdata;
};