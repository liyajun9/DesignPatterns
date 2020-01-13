#pragma once
#include <memory>

class CComponent{
public:
	virtual void ShowName() = 0;

	virtual void Add(std::shared_ptr<CComponent> spComponent){}
	virtual void Remove(std::shared_ptr<CComponent>& spComponent){}
	virtual std::weak_ptr<CComponent> GetComponent(int nIndex){ return std::weak_ptr<CComponent>(); }
};