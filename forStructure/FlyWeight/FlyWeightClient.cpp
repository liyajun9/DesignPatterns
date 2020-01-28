#include "stdafx.h"
#include "FlyWeightClient.h"
#include "FlyWeightFactory.h"

void CFlyWeightClient::AddFlyWeight(EXDATA exData, int data1, int data2, int data3)
{
	std::weak_ptr<CFlyWeight> wp = CFlyWeightFactory::GetInstance().CreateFlyWeight(data1, data2, data3);
	m_mapExdata.insert(std::pair<EXDATA, std::weak_ptr<CFlyWeight>>(exData, wp));
}

void CFlyWeightClient::ShowAllFlyWeights()
{
	std::map<EXDATA, std::weak_ptr<CFlyWeight>>::iterator iter = m_mapExdata.begin();
	for(; iter != m_mapExdata.end(); iter++){
		std::shared_ptr<CFlyWeight> sp = (iter->second).lock();
		std::wcout<<_T("FlyWeight:")<<std::endl;
		if(sp){
			std::wcout<<_T("\tIntrinsic data = ")<<sp->GetInData1()<<_T(",")<<sp->GetInData2()<<_T(",")<<sp->GetInData3()<<_T(",")<<_T("Extrinsic data=")<<iter->first.data1<<_T(",")<<iter->first.data2<<_T(",")<<iter->first.data3<<std::endl;
		}
	}
}

int CFlyWeightClient::GetSize() const
{
	return m_mapExdata.size();
}