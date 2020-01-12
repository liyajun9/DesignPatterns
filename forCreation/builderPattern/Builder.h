#pragma  once
#include "ComplexProduct.h"

class CBuilder{
public:
	CBuilder(){}
	virtual ~CBuilder(){}

	virtual CComplexProduct* GetProduct() = 0;
	virtual void Initialize() = 0;
	virtual void SwitchMode() = 0;
};