#include "stdafx.h"
#include "ConcreteObserverB.h"
#include "Subject.h"

void CConcreteObserverB::update(const CSubject& subject)
{
	std::wcout<<_T("ObserverB being notified:   new data is ")<<subject.GetData()<<std::endl;
}

void CConcreteObserverB::update()
{
	std::wcout<<_T("ObserverB being notified:   data has been changed")<<std::endl;
}