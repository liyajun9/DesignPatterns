#include "stdafx.h"
#include "FlyWeightFactory.h"
#include "FlyWeight.h"

using namespace std;

CFlyWeightFactory& CFlyWeightFactory::GetInstance()
{
	static CFlyWeightFactory sInstance;
	return sInstance;
}

weak_ptr<CFlyWeight> CFlyWeightFactory::CreateFlyWeight(int data1, int data2, int data3)
{
	weak_ptr<CFlyWeight> wp;
	for(vector<shared_ptr<CFlyWeight>>::iterator iter = m_vecFlyWeights.begin(); iter != m_vecFlyWeights.end(); iter++){
		if((*iter)->GetInData1() == data1 &&
			(*iter)->GetInData2() == data2 &&
			(*iter)->GetInData3() == data3){
				wp = (*iter);
				break;
		}
	}

	if(!wp.lock()){
		shared_ptr<CFlyWeight> sp = make_shared<CFlyWeight>(data1, data2, data3);
		m_vecFlyWeights.push_back(sp);
		wp = sp;
	}

	return wp;
}

int CFlyWeightFactory::GetSize() const
{
	return m_vecFlyWeights.size();
}