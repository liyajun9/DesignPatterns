#pragma once
#include <memory>
#include <vector>
#include "FlyWeight.h"

class CFlyWeightFactory{
public:
	static CFlyWeightFactory& GetInstance();
	std::weak_ptr<CFlyWeight> CreateFlyWeight(int data1, int data2, int data3);

	int GetSize() const;

private:
	CFlyWeightFactory(){}
	CFlyWeightFactory(const CFlyWeightFactory& rhs);
	CFlyWeightFactory& operator=(const CFlyWeightFactory& rhs);
	~CFlyWeightFactory(){}

	std::vector<std::shared_ptr<CFlyWeight>> m_vecFlyWeights;
};