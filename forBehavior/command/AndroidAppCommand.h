#pragma  once
#include "Command.h"
#include "ttype.h"

class CAndroidAppCommand : public CAbstractCommand{
public:
	CAndroidAppCommand(CReceiver* pReceiver):CAbstractCommand(pReceiver){}

	virtual tstring GetName() const;
};