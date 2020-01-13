#include "stdafx.h"
#include "FlyWeightClient.h"
#include "FlyWeightFactory.h"

void CFlyWeightClient::AddFlyWeight(EXDATA exData, int data1, int data2, int data3)
{
	weak_ptr<CFlyWeight> wp = CFlyWeightFactory::GetInstance().CreateFlyWeight(data1, data2, data3);
	m_mapExdata.insert(pair<EXDATA, weak_ptr<CFlyWeight>>(exData, wp));
}

void CFlyWeightClient::ShowAllFlyWeights()
{
	map<EXDATA, weak_ptr<CFlyWeight>>::iterator iter = m_mapExdata.begin();
	for(; iter != m_mapExdata.end(); iter++){
		shared_ptr<CFlyWeight> sp = (iter->second).lock();
		wcout<<_T("FlyWeight:")<<endl;
		if(sp){
			wcout<<_T("\tIntrinsic data = ")<<sp->GetInData1()<<_T(",")<<sp->GetInData2()<<_T(",")<<sp->GetInData3()<<_T(",")<<_T("Extrinsic data=")<<iter->first.data1<<_T(",")<<iter->first.data2<<_T(",")<<iter->first.data3<<endl;
		}
	}
}

int CFlyWeightClient::GetSize() const
{
	return m_mapExdata.size();
}