#include "pch.h"
#include "ConcreteInterface.h"

void CConcreteInterface::Operate()
{
	m_spImp->OperationImp();
}