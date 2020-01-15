#pragma once
#include "AbstractObserver.h"

class CConcreteObserverC : public CAbstractObserver{
public:
	virtual void update(const CSubject& subject);
	virtual void update();
};