#include "stdafx.h"
#include "ConcreteObserverA.h"
#include "Subject.h"

void CConcreteObserverA::update(const CSubject& subject)
{
	std::wcout<<_T("ObserverA being notified:   new data is ")<<subject.GetData()<<std::endl;
}

void CConcreteObserverA::update()
{
	std::wcout<<_T("ObserverA being notified:   data has been changed")<<std::endl;
}