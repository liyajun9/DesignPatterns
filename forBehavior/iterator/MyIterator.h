#pragma once
#include "AbstractIterator.h"
#include "AbstractAggregate.h"

class CMyIterator : public CAbstractIterator{
public:
	CMyIterator(CAbstractAggregate* pAggregate):m_pAggregate(pAggregate), m_nIndex(0){}
	virtual ~CMyIterator(){}

	virtual void Fisrt();
	virtual void Last();
	virtual void Next();
	virtual bool HasNext();
	virtual CElement CurrentItem();

private:
	CMyIterator();
	CAbstractAggregate* m_pAggregate;

	size_t m_nIndex;
};