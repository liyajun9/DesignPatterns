#include "pch.h"
#include "FlyWeight.h"

void CFlyWeight::SetExData(const EXDATA& exData)
{
	m_exData.data1 = exData.data1;
	m_exData.data2 = exData.data2;
	m_exData.data3 = exData.data3;
}

const EXDATA& CFlyWeight::GetExData() const
{
	return m_exData;
}