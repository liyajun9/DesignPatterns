#pragma once
#include "State.h"
#include "Machine.h"
#include "Resume.h"
#include <tchar.h>

class CPause : public CState{
public:
	virtual void Resume(CMachine* pMachine){
		std::wcout<<_T("switch to Resume")<<std::endl;
		pMachine->SetState(new CResume());
		delete this;
	}
	virtual void Off(CMachine* pMachine){
		std::wcout<<_T("switch to Off")<<std::endl;
		pMachine->SetState(new COff());
		delete this;
	}
};

void CResume::Pause(CMachine* pMachine){
	std::wcout<<_T("switch to Pause")<<std::endl;
	pMachine->SetState(new CPause());
	delete this;
}