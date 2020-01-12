#include "stdafx.h"
#include "WingDecorateCar.h"

CWingDecorateCar::CWingDecorateCar(CCar* pCar):m_pCar(pCar)
{

}

void CWingDecorateCar::Show()
{
	m_pCar->Show();
	AddDecoration();
}

void CWingDecorateCar::AddDecoration()
{
	std::wcout<<_T("with wind decoration")<<std::endl;
}