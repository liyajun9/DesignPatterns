#pragma 
#include "CompilerTemplate.h"

class CJavaCompiler : public CCompilerTemplate{
public:
	virtual ~CJavaCompiler(){}

	virtual void LexicalAnalysis();
	virtual void SyntaxAnalysis();
	virtual void SemanticAnalysis();
	virtual void GenerateObjCode();
};