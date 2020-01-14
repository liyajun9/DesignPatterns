#include "stdafx.h"
#include "Command.h"

void CAbstractCommand::Process()
{
	m_pReceiver->Process();
}