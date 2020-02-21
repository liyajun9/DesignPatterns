#include "pch.h"
#include "ConcreteImplNew.h"

void CConcreteImplNew::OperationImp()
{
	BefOperate();
	std::wcout<<_T("ConcreteImplNew operationImplementation new")<<std::endl;
	AftOperate();
}

void CConcreteImplNew::BefOperate()
{
	std::wcout<<_T("Before operate in impNew")<<std::endl;
}

void CConcreteImplNew::AftOperate()
{
	std::wcout<<_T("After operate in impNew")<<std::endl;
}