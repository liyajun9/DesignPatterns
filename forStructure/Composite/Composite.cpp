#include "pch.h"
#include "Composite.h"

void CComposite::ShowName()
{
	std::vector<std::shared_ptr<CComponent>>::iterator iter = m_vecComponents.begin();
	for(; iter != m_vecComponents.end(); iter++){
		(*iter)->ShowName();
	}
}

void CComposite::Add(std::shared_ptr<CComponent> spComponent)
{
	m_vecComponents.push_back(spComponent);
}

void CComposite::Remove(std::shared_ptr<CComponent>& spComponent)
{
	std::vector<std::shared_ptr<CComponent>>::iterator iter = m_vecComponents.begin();
	for(; iter != m_vecComponents.end(); iter++){
		if(spComponent== (*iter)){
			m_vecComponents.erase(iter);
			break;
		}
	}
}

std::weak_ptr<CComponent> CComposite::GetComponent(int nIndex)
{
	std::weak_ptr<CComponent> wpComponent;
	if(nIndex < (int)m_vecComponents.size())
		wpComponent = m_vecComponents[nIndex];
	
	return wpComponent;
}