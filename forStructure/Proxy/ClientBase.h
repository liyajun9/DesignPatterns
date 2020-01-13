#pragma once

class CClientBase{
public:
	CClientBase(){}
	virtual ~CClientBase(){}

	virtual void Request() = 0;
};