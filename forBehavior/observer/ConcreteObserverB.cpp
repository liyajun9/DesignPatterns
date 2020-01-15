#include "stdafx.h"
#include "ConcreteObserverB.h"
#include "Subject.h"

using namespace std;
void CConcreteObserverB::update(const CSubject& subject)
{
	wcout<<_T("ObserverB being notified:   new data is ")<<subject.GetData()<<endl;
}

void CConcreteObserverB::update()
{
	wcout<<_T("ObserverB being notified:   data has been changed")<<endl;
}