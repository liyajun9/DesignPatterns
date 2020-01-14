#include "stdafx.h"
#include "ConcreteAlgorithmB.h"
#include <tchar.h>

int CConcreteAlgorithmB::Calculate()
{
	std::wcout<<_T("concrete algorithmB caculation")<<std::endl;
	return 2;
}