#pragma once
#include "State.h"
#include "Pause.h"
#include "Machine.h"
#include "Off.h"
#include <tchar.h>

class COn : public CState{

public:
	virtual void Pause(CMachine* pMachine){
		std::wcout<<_T("switch to Pause")<<std::endl;
		pMachine->SetState(new CPause());
		delete this;
	}
	virtual void Off(CMachine* pMachine){
		std::wcout<<_T("switch to Off")<<std::endl;
		pMachine->SetState(new COff());
		delete this;
	}
};

void COff::On(CMachine* pMachine)
{
	std::wcout<<_T("switch to On")<<std::endl;
	pMachine->SetState(new COn());
	delete this;
}