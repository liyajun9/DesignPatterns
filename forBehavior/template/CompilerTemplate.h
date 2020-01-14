#pragma once

class CCompilerTemplate{
public:
	virtual ~CCompilerTemplate(){}

	void Compile(); //the template method

	virtual void LexicalAnalysis() = 0;
	virtual void SyntaxAnalysis() = 0;
	virtual void SemanticAnalysis() = 0;
	virtual void GenerateObjCode() = 0;
};