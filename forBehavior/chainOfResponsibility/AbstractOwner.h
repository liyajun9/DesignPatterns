#pragma once
#include "Demand.h"

class CAbstractOwner{
public:
	CAbstractOwner():m_pSubordinate(NULL){}
	virtual ~CAbstractOwner(){}

	void HandleDemand(const CDemand& demand);
	CAbstractOwner* GetSubordinate() const;
	void SetSubordinate(CAbstractOwner* pSubordinate);

protected:
	virtual void Handle(const CDemand& demand) = 0;

private:
	CAbstractOwner* m_pSubordinate;
};