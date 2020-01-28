#include "stdafx.h"
#include "Invoker.h"

void CInvoker::AddCommand(CAbstractCommand* pCCommand)
{
	m_commands.push_back(pCCommand);
}

void CInvoker::Process(const tstring& command)
{
	bool bProcessed(false);
	for(std::list<CAbstractCommand*>::iterator iter= m_commands.begin(); iter != m_commands.end(); iter++){
		if(command.compare((*iter)->GetName()) == 0){
			(*iter)->Process();
			bProcessed = true;
		}
	}
	if(!bProcessed) std::wcout<<_T("no processor for this command - ")<<command<<std::endl;
}