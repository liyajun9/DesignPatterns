#include "pch.h"
#include "LogoDecorateCar.h"

CLogoDecorateCar::CLogoDecorateCar(CCar* pCar):m_pCar(pCar)
{

}

void CLogoDecorateCar::Show()
{
	m_pCar->Show();
	AddDecoration();
}

void CLogoDecorateCar::AddDecoration()
{
	std::wcout<<_T("with logo decoration")<<std::endl;
}