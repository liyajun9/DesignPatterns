#pragma once
#include "Builder.h"
#include "ComplexProduct.h"

class CConcreteBuilderA : public CBuilder{
public:
	CConcreteBuilderA();
	~CConcreteBuilderA();

	virtual CComplexProduct* GetProduct();
	virtual void Initialize();
	virtual void SwitchMode();

private:
	CComplexProduct* m_pProduct;

};