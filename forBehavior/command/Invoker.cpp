#include "stdafx.h"
#include "Invoker.h"

using namespace std;
void CInvoker::AddCommand(CAbstractCommand* pCCommand)
{
	m_commands.push_back(pCCommand);
}

void CInvoker::Process(const tstring& command)
{
	bool bProcessed(false);
	for(list<CAbstractCommand*>::iterator iter= m_commands.begin(); iter != m_commands.end(); iter++){
		if(command.compare((*iter)->GetName()) == 0){
			(*iter)->Process();
			bProcessed = true;
		}
	}
	if(!bProcessed) wcout<<_T("no processor for this command - ")<<command<<endl;
}