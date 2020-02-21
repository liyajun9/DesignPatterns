#include "pch.h"
#include "ConcreteAlgorithmC.h"
#include <tchar.h>

int CConcreteAlgorithmC::Calculate()
{
	std::wcout<<_T("concrete algorithmC caculation")<<std::endl;
	return 3;
}