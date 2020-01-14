#pragma once
#include "..\..\..\YJ_WinTools\Log\tstring.h"
#include "Command.h"

class CIOSAppCommand : public CAbstractCommand{
public:
	CIOSAppCommand(CReceiver* pReceiver):CAbstractCommand(pReceiver){}

	tstring GetName() const;
};