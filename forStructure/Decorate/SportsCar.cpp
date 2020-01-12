#include "stdafx.h"
#include "SportsCar.h"

CSportsCar::CSportsCar(tstring sName):m_sName(sName)
{

}

void CSportsCar::Show()
{
	std::wcout<<_T("This is a sports car with name ")<<m_sName<<_T(" ")<<std::endl;
}