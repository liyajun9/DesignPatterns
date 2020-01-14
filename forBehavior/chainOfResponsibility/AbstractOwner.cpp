#include "stdafx.h"
#include "AbstractOwner.h"

void CAbstractOwner::HandleDemand(const CDemand& demand)
{
	if(m_pSubordinate)
		m_pSubordinate->HandleDemand(demand);
	else
		Handle(demand);
}

CAbstractOwner* CAbstractOwner::GetSubordinate() const
{
	return m_pSubordinate;
}

void CAbstractOwner::SetSubordinate(CAbstractOwner* pSubordinate)
{
	m_pSubordinate = pSubordinate;
}