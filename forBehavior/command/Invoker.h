#pragma once
#include <list>
#include <memory>
#include "..\..\..\YJ_WinTools\Log\tstring.h"
#include "Command.h"

class CInvoker{
public:
	void AddCommand(CAbstractCommand* pCCommand);
	void Process(const tstring& command);

private:
	std::list<CAbstractCommand*> m_commands;
};