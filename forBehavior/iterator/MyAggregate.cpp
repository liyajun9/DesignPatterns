#include "stdafx.h"
#include "MyAggregate.h"

CMyIterator* CMyAggregate::CreateIterator()
{
	return new CMyIterator(this);
}

CElement CMyAggregate::GetItem(int nIndex)
{
	if(nIndex < 5 && nIndex > 0)
		return m_element[nIndex];
}

size_t CMyAggregate::GetSize()
{
	return 5;
}