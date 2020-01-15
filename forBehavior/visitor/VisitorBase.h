#pragma once
#include "ElementBase.h"

class CVisitorBase{
public:
	virtual ~CVisitorBase(){}

	virtual void visitBedRoom(CElementBase* pElement) = 0;
	virtual void visitLivingRoom(CElementBase* pElement) = 0;
};