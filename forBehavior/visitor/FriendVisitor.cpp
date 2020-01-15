#include "stdafx.h"
#include "FriendVisitor.h"

using namespace std;
void CFriendVisitor::visitBedRoom(CElementBase* pElement)
{
	wcout<<_T("My friend is visiting my bedroom")<<endl;
}

void CFriendVisitor::visitLivingRoom(CElementBase* pElement)
{
	wcout<<_T("My friend and I are playing e-game together")<<endl;
}