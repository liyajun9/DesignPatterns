#include "stdafx.h"
#include "WorkObj.h"
#include "Memento.h"

void CWorkObj::SetContent(const TCHAR* lpContent, int nLen)
{
	memset(m_content, 0, 260);
	memcpy(m_content, lpContent, nLen * sizeof(TCHAR));
}

const TCHAR* CWorkObj::GetContent() const
{
	return m_content;
}

void CWorkObj::Open()
{
	m_bIsOpen = true;
}

void CWorkObj::Close()
{
	m_bIsOpen = false;
}

bool CWorkObj::GetIsOpen() const
{
	return m_bIsOpen;
}

CMemento* CWorkObj::CreateMemento()
{
	if(!m_spState){
		m_spState = std::make_shared<STATE>();
	}
	m_spState->isOpen = m_bIsOpen;
	memcpy(m_spState->content, m_content, 260);

	std::weak_ptr<STATE> wp = m_spState;

	return new CMemento(wp);
}

void CWorkObj::SaveToMemento(CMemento* pMemento)
{
	if(false == pMemento->m_wpState.expired()){
		std::shared_ptr<STATE> sp = pMemento->m_wpState.lock();
		sp->isOpen = m_bIsOpen;
		memcpy(m_spState->content, m_content, 260);
	}
}

void CWorkObj::RecoverFromMemento(CMemento* pMemento)
{
	if(false==pMemento->m_wpState.expired()){
		std::shared_ptr<STATE> sp = pMemento->m_wpState.lock();
		m_bIsOpen = sp->isOpen;
		memcpy(m_content, m_spState->content, 260);
	}
}