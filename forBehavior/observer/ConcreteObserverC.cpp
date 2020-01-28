#include "stdafx.h"
#include "ConcreteObserverC.h"
#include "Subject.h"

void CConcreteObserverC::update(const CSubject& subject)
{
	std::wcout<<_T("ObserverC being notified:   new data is ")<<subject.GetData()<<std::endl;
}

void CConcreteObserverC::update()
{
	std::wcout<<_T("ObserverC being notified:   data has been changed")<<std::endl;
}