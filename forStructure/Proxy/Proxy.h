#pragma once
#include "ClientBase.h"

class CProxy : public CClientBase{
public:
	CProxy(CClientBase* pClientBase, int nNum);
	~CProxy(){}

	virtual void Request();

	bool AllowRequest();
	void BefRequest();
	void AftRequest();

private:
	CProxy();

	CClientBase* m_pClientBase;
	int m_nNum;
};