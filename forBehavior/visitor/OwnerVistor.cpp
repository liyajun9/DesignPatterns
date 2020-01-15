#include "stdafx.h"
#include "OwnerVistor.h"

using namespace std;
void COwnerVisitor::visitBedRoom(CElementBase* pElement)
{
	wcout<<_T("I am going to sleep")<<endl;
}

void COwnerVisitor::visitLivingRoom(CElementBase* pElement)
{
	wcout<<_T("I am going to watch TV")<<endl;
}