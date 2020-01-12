#pragma once
#include "Car.h"

class CLogoDecorateCar : public CCar{
public:
	CLogoDecorateCar(CCar* pCar);
	virtual ~CLogoDecorateCar(){}

	virtual void Show();

	void AddDecoration();

private:
	CLogoDecorateCar();
	CCar* m_pCar;
};