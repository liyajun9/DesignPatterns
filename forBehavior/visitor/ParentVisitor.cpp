#include "stdafx.h"
#include "ParentVisitor.h"

void CParentVisitor::visitBedRoom(CElementBase* pElement)
{
	std::wcout<<_T("Mom is tiding up my bedroom")<<std::endl;
}

void CParentVisitor::visitLivingRoom(CElementBase* pElement)
{
	std::wcout<<_T("Dad is sitting in my sofa and watching TV")<<std::endl;
}