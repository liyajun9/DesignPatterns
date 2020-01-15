#pragma once
#include "State.h"

class CMachine{
public:
	CMachine();

	/*
	state: off->on->[pause]->resume->off
	on: only switch to off/pause
	off: only switch to on 
	pause: only switch to resume/off
	resume: only switch to pause/off
	*/
	void SetState(CState* pState);
	void On();
	void Pause();
	void Resume();
	void Off();

private:
	CState* m_pState;
};