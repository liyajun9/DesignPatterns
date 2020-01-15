#pragma once
#include "VisitorBase.h"

class CFriendVisitor : public CVisitorBase{
public:
	~CFriendVisitor(){}

	virtual void visitBedRoom(CElementBase* pElement);
	virtual void visitLivingRoom(CElementBase* pElement);
};