#pragma once

class CAbstractInterface{
public:
	virtual ~CAbstractInterface(){}

	virtual void Operate() = 0;
};