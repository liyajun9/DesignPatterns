#pragma once
#include "Car.h"

class CWingDecorateCar : public CCar{
public:
	CWingDecorateCar(CCar* pCar);
	virtual ~CWingDecorateCar(){}

	virtual void Show();

	void AddDecoration();

private:
	CWingDecorateCar();

	CCar* m_pCar;
};