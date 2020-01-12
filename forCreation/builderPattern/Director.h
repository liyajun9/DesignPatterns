#pragma once
#include "Builder.h"

class CDirector{
public:
	CDirector(CBuilder* pBuilder);
	~CDirector();

	void Construct();
	CComplexProduct* GetProduct();

private:
	CDirector();
	CBuilder* m_pBuilder;
};