#include "stdafx.h"
#include "CompilerTemplate.h"

void CCompilerTemplate::Compile()
{
	LexicalAnalysis();
	SyntaxAnalysis();
	SemanticAnalysis();
	GenerateObjCode();
}