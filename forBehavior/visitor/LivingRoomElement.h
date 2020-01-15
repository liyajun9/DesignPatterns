#pragma once
#include "ElementBase.h"

class CLivingRoomElement : public CElementBase{
public:
	virtual ~CLivingRoomElement(){}

	virtual void accept(CVisitorBase& visitor);
};