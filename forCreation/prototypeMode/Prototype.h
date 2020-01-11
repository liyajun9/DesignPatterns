#pragma once

class CPrototype{
public:
	CPrototype(){}
	virtual ~CPrototype(){}

	virtual CPrototype* Clone() = 0;

private:
	CPrototype(const CPrototype& rhs);
	CPrototype& operator=(const CPrototype& rhs);
};