#include "stdafx.h"
#include "ConcreteObserverC.h"
#include "Subject.h"

using namespace std;
void CConcreteObserverC::update(const CSubject& subject)
{
	wcout<<_T("ObserverC being notified:   new data is ")<<subject.GetData()<<endl;
}

void CConcreteObserverC::update()
{
	wcout<<_T("ObserverC being notified:   data has been changed")<<endl;
}