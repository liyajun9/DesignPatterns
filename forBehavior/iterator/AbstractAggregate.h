#pragma once
#include "AbstractIterator.h"
#include "Element.h"

class CAbstractAggregate{
public:
	virtual ~CAbstractAggregate(){}

	virtual CAbstractIterator* CreateIterator() = 0;
	virtual CElement GetItem(int nIndex) = 0;
	virtual size_t GetSize() = 0;
};