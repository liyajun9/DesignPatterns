#pragma once
#include "Component.h"
#include <vector>
#include <memory>

class CComposite : public CComponent{
public:
	virtual void ShowName();

	virtual void Add(std::shared_ptr<CComponent> spComponent);
	virtual void Remove(std::shared_ptr<CComponent>& spComponent);
	virtual std::weak_ptr<CComponent> GetComponent(int nIndex);

private:
	std::vector<std::shared_ptr<CComponent>> m_vecComponents;
};