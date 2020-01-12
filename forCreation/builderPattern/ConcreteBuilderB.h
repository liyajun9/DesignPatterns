#pragma once
#include "Builder.h"
#include "ComplexProduct.h"

class CConcreteBuilderB : public CBuilder{
public:
	CConcreteBuilderB();
	~CConcreteBuilderB();

	virtual CComplexProduct* GetProduct();
	virtual void Initialize();
	virtual void SwitchMode();

private:
	CComplexProduct* m_pProduct;

};