#pragma once

class CMachine;
class CState{

public:
	virtual void On(CMachine* pMachine) { }
	virtual void Off(CMachine* pMachine) {}
	virtual void Pause(CMachine* pMachine) {}
	virtual void Resume(CMachine* pMachine) {}
};