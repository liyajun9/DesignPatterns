#include "stdafx.h"
#include "Facade.h"
#include "PreAssembler.h"
#include "Assembler.h"
#include "Tester.h"

bool CFacade::Produce()
{
	CPreAssembler PreAssembly;
	CAssembler Assembler;
	CTester Tester;

	PreAssembly.Operate();
	Assembler.Assemble();
	return Tester.Test();
}