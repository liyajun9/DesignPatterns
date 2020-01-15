#include "stdafx.h"
#include "ConcreteObserverA.h"
#include "Subject.h"

using namespace std;
void CConcreteObserverA::update(const CSubject& subject)
{
	wcout<<_T("ObserverA being notified:   new data is ")<<subject.GetData()<<endl;
}

void CConcreteObserverA::update()
{
	wcout<<_T("ObserverA being notified:   data has been changed")<<endl;
}