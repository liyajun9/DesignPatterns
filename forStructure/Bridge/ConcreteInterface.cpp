#include "stdafx.h"
#include "ConcreteInterface.h"

void CConcreteInterface::Operate()
{
	m_spImp->OperationImp();
}