#pragma once
#include "AbstractInterface.h"
#include "AbstractImpl.h"
#include <memory>

class CConcreteInterface : public CAbstractInterface{
public:
	CConcreteInterface(std::shared_ptr<CAbstractionImp> spImpl):m_spImp(spImpl){}
	virtual ~CConcreteInterface(){}

	virtual void Operate();

private:
	CConcreteInterface();

	std::shared_ptr<CAbstractionImp> m_spImp;
};