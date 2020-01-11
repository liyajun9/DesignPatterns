#include "stdafx.h"
#include "ConcretPrototype.h"

CConcretPrototype::CConcretPrototype(const CConcretPrototype& rhs)
{
	m_data = rhs.GetData();
}

CConcretPrototype* CConcretPrototype::Clone()
{
	return new CConcretPrototype(*this);
}

int CConcretPrototype::GetData() const
{
	return m_data;
}
void CConcretPrototype::SetData(int nData)
{
	m_data = nData;
}