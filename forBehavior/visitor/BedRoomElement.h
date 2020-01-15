#pragma once
#include "ElementBase.h"

class CBedRoomElement : public CElementBase{
public:
	virtual ~CBedRoomElement(){}

	virtual void accept(CVisitorBase& visitor);
};