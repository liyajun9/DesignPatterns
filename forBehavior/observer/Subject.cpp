#include "stdafx.h"
#include "Subject.h"

using std::list;
void CSubject::registerObserver(CAbstractObserver* pObserver)
{
	m_listObserver.push_back(pObserver);
}

void CSubject::removeObserver(CAbstractObserver* pObserver)
{
	for(list<CAbstractObserver*>::iterator iter = m_listObserver.begin(); iter != m_listObserver.end(); iter++){
		if(*iter == pObserver){
			m_listObserver.erase(iter);
			break;
		}			
	}
}

void CSubject::setChanged(bool bChanged)
{
	m_bChanged = bChanged;
}

void CSubject::notify(CAbstractObserver* pObserver)
{
	if(!m_bChanged) return;
	for(list<CAbstractObserver*>::iterator iter = m_listObserver.begin(); iter != m_listObserver.end(); iter++){
		if(*iter == pObserver){
			(*iter)->update();
			break;
		}			
	}
}

void CSubject::notifyData(CAbstractObserver* pObserver)
{
	if(!m_bChanged) return;
	for(list<CAbstractObserver*>::iterator iter = m_listObserver.begin(); iter != m_listObserver.end(); iter++){
		if(*iter == pObserver){
			(*iter)->update(*this);
			break;
		}			
	}
}

void CSubject::notifyAll()
{
	if(!m_bChanged) return;
	for(list<CAbstractObserver*>::iterator iter = m_listObserver.begin(); iter != m_listObserver.end(); iter++){
		(*iter)->update();
	}
}

void CSubject::notifyDataAll()
{
	if(!m_bChanged) return;
	for(list<CAbstractObserver*>::iterator iter = m_listObserver.begin(); iter != m_listObserver.end(); iter++){
		(*iter)->update(*this);
	}
}

int CSubject::GetData() const
{
	return m_nData;
}

void CSubject::SetData(int nData)
{
	m_nData = nData;
}