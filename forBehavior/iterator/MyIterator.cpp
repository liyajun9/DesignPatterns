#include "pch.h"
#include "MyIterator.h"

void CMyIterator::Fisrt()
{
	m_nIndex = 0;
}

void CMyIterator::Last()
{
	m_nIndex = m_pAggregate->GetSize() - 1;
}

void CMyIterator::Next()
{
	if(m_nIndex < m_pAggregate->GetSize() - 1)
		m_nIndex++;
}

bool CMyIterator::HasNext()
{
	return m_nIndex < m_pAggregate->GetSize() - 1;
}

CElement CMyIterator::CurrentItem()
{
	return m_pAggregate->GetItem(m_nIndex);
}