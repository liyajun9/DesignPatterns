#pragma once
#include "State.h"
#include "Machine.h"
#include "Pause.h"
#include "Off.h"
#include <tchar.h>

class CResume : public CState{
public:
	virtual void Pause(CMachine* pMachine);

	virtual void Off(CMachine* pMachine){
		std::wcout<<_T("switch to Off")<<std::endl;
		pMachine->SetState(new COff());
		delete this;
	}

};