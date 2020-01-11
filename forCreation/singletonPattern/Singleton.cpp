#include "stdafx.h"
#include "Singleton.h"

CSingleton& CSingleton::GetInstance()
{
	static CSingleton sInstance;
	return sInstance;
}

int CSingleton::GetData() const
{
	return m_data;
}

void CSingleton::SetData(int nData)
{
	m_data = nData;
}