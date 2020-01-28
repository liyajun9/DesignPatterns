#include "stdafx.h"
#include "FlyWeightFactory.h"
#include "FlyWeight.h"

CFlyWeightFactory& CFlyWeightFactory::GetInstance()
{
	static CFlyWeightFactory sInstance;
	return sInstance;
}

std::weak_ptr<CFlyWeight> CFlyWeightFactory::CreateFlyWeight(int data1, int data2, int data3)
{
	std::weak_ptr<CFlyWeight> wp;
	for(std::vector<std::shared_ptr<CFlyWeight>>::iterator iter = m_vecFlyWeights.begin(); iter != m_vecFlyWeights.end(); iter++){
		if((*iter)->GetInData1() == data1 &&
			(*iter)->GetInData2() == data2 &&
			(*iter)->GetInData3() == data3){
				wp = (*iter);
				break;
		}
	}

	if(!wp.lock()){
		std::shared_ptr<CFlyWeight> sp = std::make_shared<CFlyWeight>(data1, data2, data3);
		m_vecFlyWeights.push_back(sp);
		wp = sp;
	}

	return wp;
}

int CFlyWeightFactory::GetSize() const
{
	return m_vecFlyWeights.size();
}