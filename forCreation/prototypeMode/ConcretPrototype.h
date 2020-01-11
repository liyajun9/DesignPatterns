#pragma once
#include "Prototype.h"

class CConcretPrototype : public CPrototype{
public:
	CConcretPrototype(int nData):m_data(nData){}
	virtual ~CConcretPrototype(){}
	CConcretPrototype(const CConcretPrototype& rhs);

	virtual CConcretPrototype* Clone();

	int GetData() const;
	void SetData(int nData);

private:
	CConcretPrototype();
	int m_data;

};