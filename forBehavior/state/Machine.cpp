#include "stdafx.h"
#include "Machine.h"
#include <typeinfo>
#include "On.h"

CMachine::CMachine()
{
	m_pState = new COff();
	std::wcout<<_T("Original state: Off")<<std::endl;
}

void CMachine::SetState(CState* pState)
{
	m_pState = pState;
}

void CMachine::On()
{
	m_pState->On(this);
}

void CMachine::Off()
{
	m_pState->Off(this);
}

void CMachine::Pause()
{
	m_pState->Pause(this);
}

void CMachine::Resume()
{
	m_pState->Resume(this);
}