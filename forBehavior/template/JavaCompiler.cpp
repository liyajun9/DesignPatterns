#include "stdafx.h"
#include "JavaCompiler.h"
#include <tchar.h>

using namespace std;
void CJavaCompiler::LexicalAnalysis()
{
	wcout<<_T("execute Java LexicalAnalysis...")<<endl;
}

void CJavaCompiler::SyntaxAnalysis()
{
	wcout<<_T("execute Java SyntaxAnalysis...")<<endl;
}

void CJavaCompiler::SemanticAnalysis()
{
	wcout<<_T("execute Java SemanticAnalysis...")<<endl;
}

void CJavaCompiler::GenerateObjCode()
{
	wcout<<_T("execute Java GenerateObjCode...")<<endl;
}