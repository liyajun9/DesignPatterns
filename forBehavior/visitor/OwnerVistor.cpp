#include "pch.h"
#include "OwnerVistor.h"

void COwnerVisitor::visitBedRoom(CElementBase* pElement)
{
	std::wcout<<_T("I am going to sleep")<<std::endl;
}

void COwnerVisitor::visitLivingRoom(CElementBase* pElement)
{
	std::wcout<<_T("I am going to watch TV")<<std::endl;
}