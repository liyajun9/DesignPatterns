#pragma once
#include "Element.h"

class CAbstractIterator{
public:
	virtual ~CAbstractIterator(){}

	virtual void Fisrt() = 0;
	virtual void Last() = 0;
	virtual void Next() = 0;
	virtual bool HasNext() = 0;
	virtual CElement CurrentItem() = 0;
};