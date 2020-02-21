#include "pch.h"
#include "Leaf.h"

CLeaf::CLeaf(const tstring& sName)
	:CComponent()
	,m_sName(sName)
{

}

void CLeaf::ShowName()
{
	std::wcout<<_T("This leaf'name is: ")<<m_sName<<std::endl;
}