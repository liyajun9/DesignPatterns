#pragma once

class CProduct{
public:
	CProduct(){}
	virtual ~CProduct(){}

	virtual void play() = 0;
};