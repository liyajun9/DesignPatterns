#pragma once
#include "Car.h"

class CSportsCar : public CCar{
public:
	CSportsCar(tstring sName);
	virtual ~CSportsCar(){}

	virtual void Show();

private:
	CSportsCar();

	tstring m_sName;
};