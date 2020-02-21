#include "pch.h"
#include "Proxy.h"

CProxy::CProxy(CClientBase* pClientBase, int nNum)
	:CClientBase(),
	m_pClientBase(pClientBase), 
	m_nNum(nNum)
{

}

void CProxy::Request()
{
	if(AllowRequest()){
		BefRequest();
		m_pClientBase->Request();
		AftRequest();
	}else{
		std::wcout<<_T("Request is not allowed")<<std::endl;
	}
}

bool CProxy::AllowRequest()
{
	if(m_nNum >= 10)
		return true;
	else
		return false;
}

void CProxy::BefRequest()
{
	std::wcout<<_T("Before Request")<<std::endl;
}

void CProxy::AftRequest()
{
	std::wcout<<_T("After Request")<<std::endl;
}