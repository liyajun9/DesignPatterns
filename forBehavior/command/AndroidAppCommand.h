#pragma  once
#include "Command.h"
#include "..\..\..\YJ_WinTools\Log\tstring.h"

class CAndroidAppCommand : public CAbstractCommand{
public:
	CAndroidAppCommand(CReceiver* pReceiver):CAbstractCommand(pReceiver){}

	virtual tstring GetName() const;
};