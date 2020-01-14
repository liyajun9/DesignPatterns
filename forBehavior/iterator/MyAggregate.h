#pragma once
#include "AbstractAggregate.h"
#include "MyIterator.h"

class CMyAggregate : public CAbstractAggregate{
public:
	virtual ~CMyAggregate(){}

	virtual CMyIterator* CreateIterator();
	virtual CElement GetItem(int nIndex);
	virtual size_t GetSize();

private:
	CElement m_element[5];
};