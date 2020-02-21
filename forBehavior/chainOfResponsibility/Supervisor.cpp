#include "pch.h"
#include "Supervisor.h"

void CSupervisor::Handle(const CDemand& demand)
{
	std::wcout<<_T("Supervisor is responsible for this demand of type-")<<demand.GetType()<<_T(",name=")<<demand.GetName()<<std::endl;
}