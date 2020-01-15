#pragma once
#include "AbstractObserver.h"

class CConcreteObserverA : public CAbstractObserver{
public:
	virtual void update(const CSubject& subject);
	virtual void update();
};