#include "stdafx.h"
#include "ParentVisitor.h"

using namespace std;
void CParentVisitor::visitBedRoom(CElementBase* pElement)
{
	wcout<<_T("Mom is tiding up my bedroom")<<endl;
}

void CParentVisitor::visitLivingRoom(CElementBase* pElement)
{
	wcout<<_T("Dad is sitting in my sofa and watching TV")<<endl;
}