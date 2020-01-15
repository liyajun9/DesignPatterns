#pragma once
#include "VisitorBase.h"

class COwnerVisitor : public CVisitorBase{
public:
	~COwnerVisitor(){}

	virtual void visitBedRoom(CElementBase* pElement);
	virtual void visitLivingRoom(CElementBase* pElement);
};