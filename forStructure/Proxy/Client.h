#pragma once
#include "ClientBase.h"

class CClient : public CClientBase{
public:
	CClient(){}
	virtual ~CClient(){}

	virtual void Request();
};