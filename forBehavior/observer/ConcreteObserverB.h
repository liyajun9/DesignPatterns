#pragma once
#include "AbstractObserver.h"

class CConcreteObserverB : public CAbstractObserver{
public:
	virtual void update(const CSubject& subject);
	virtual void update();
};