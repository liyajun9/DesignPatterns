#include "pch.h"
#include "Manager.h"
#include <tchar.h>

void CManager::Handle(const CDemand& demand)
{
	std::wcout<<_T("Manager is responsible for this demand of type-")<<demand.GetType()<<_T(",name=")<<demand.GetName()<<std::endl;
}