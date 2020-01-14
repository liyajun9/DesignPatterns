#pragma once
#include <list>
#include <memory>
#include "..\..\..\YJ_WinTools\Log\tstring.h"
#include "Command.h"

using namespace std;
class CInvoker{
public:
	void AddCommand(CAbstractCommand* pCCommand);
	void Process(const tstring& command);

private:
	list<CAbstractCommand*> m_commands;
};