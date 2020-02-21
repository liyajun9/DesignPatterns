#include "pch.h"
#include "ConcreteAlgorithmA.h"
#include <tchar.h>

int CConcreteAlgorithmA::Calculate()
{
	std::wcout<<_T("concrete algorithmA caculation")<<std::endl;
	return 1;
}