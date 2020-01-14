#pragma once
#include "Receiver.h"
#include "..\..\..\YJ_WinTools\Log\tstring.h"

class CAbstractCommand{
public:
	explicit CAbstractCommand(CReceiver* pReceiver):m_pReceiver(pReceiver){}
	virtual ~CAbstractCommand(){}

	void Process();
	virtual tstring GetName() const = 0;

private:
	CAbstractCommand();
	CReceiver* m_pReceiver;
};