#include "pch.h"
#include "Developer.h"

void CDeveloper::Handle(const CDemand& demand)
{
	std::wcout<<_T("Developer is responsible for this demand of type-")<<demand.GetType()<<_T(",name=")<<demand.GetName()<<std::endl;
}