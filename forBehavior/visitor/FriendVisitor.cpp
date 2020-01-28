#include "stdafx.h"
#include "FriendVisitor.h"

void CFriendVisitor::visitBedRoom(CElementBase* pElement)
{
	std::wcout<<_T("My friend is visiting my bedroom")<<std::endl;
}

void CFriendVisitor::visitLivingRoom(CElementBase* pElement)
{
	std::wcout<<_T("My friend and I are playing e-game together")<<std::endl;
}