#pragma once
#include "ttype.h"
#include "Command.h"

class CIOSAppCommand : public CAbstractCommand{
public:
	CIOSAppCommand(CReceiver* pReceiver):CAbstractCommand(pReceiver){}

	tstring GetName() const;
};