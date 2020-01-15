#pragma once
#include "Machine.h"

class COn;
class COff : public CState{
public:
	virtual void On(CMachine* pMachine);
};