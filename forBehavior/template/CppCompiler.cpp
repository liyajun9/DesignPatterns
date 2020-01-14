#include "stdafx.h"
#include "CppCompiler.h"
#include <tchar.h>

using namespace std;
void CCppCompiler::LexicalAnalysis()
{
	wcout<<_T("execute C++ LexicalAnalysis...")<<endl;
}

void CCppCompiler::SyntaxAnalysis()
{
	wcout<<_T("execute C++ SyntaxAnalysis...")<<endl;
}

void CCppCompiler::SemanticAnalysis()
{
	wcout<<_T("execute C++ SemanticAnalysis...")<<endl;
}

void CCppCompiler::GenerateObjCode()
{
	wcout<<_T("execute C++ GenerateObjCode...")<<endl;
}