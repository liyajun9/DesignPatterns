#include "pch.h"
#include "CppCompiler.h"
#include <tchar.h>

void CCppCompiler::LexicalAnalysis()
{
	std::wcout<<_T("execute C++ LexicalAnalysis...")<<std::endl;
}

void CCppCompiler::SyntaxAnalysis()
{
	std::wcout<<_T("execute C++ SyntaxAnalysis...")<<std::endl;
}

void CCppCompiler::SemanticAnalysis()
{
	std::wcout<<_T("execute C++ SemanticAnalysis...")<<std::endl;
}

void CCppCompiler::GenerateObjCode()
{
	std::wcout<<_T("execute C++ GenerateObjCode...")<<std::endl;
}