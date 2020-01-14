#pragma once
#include "CompilerTemplate.h"

class CCppCompiler : public CCompilerTemplate{
public:
	virtual ~CCppCompiler(){}

	virtual void LexicalAnalysis();
	virtual void SyntaxAnalysis();
	virtual void SemanticAnalysis();
	virtual void GenerateObjCode();
};