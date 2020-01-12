#pragma once

class CTargetInterface{
public:
	CTargetInterface(){}
	virtual ~CTargetInterface(){}

	virtual void Request() = 0;
};