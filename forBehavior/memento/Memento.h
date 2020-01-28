#pragma once
#include "WorkObj.h"
#include <memory>

class CWorkObj;

class CMemento{
public:
	CMemento(std::weak_ptr<STATE> wpState):m_wpState(wpState){}

	std::weak_ptr<STATE> GetState();

	friend class CWorkObj; //only CWorkObj can write to memento
private:
	CMemento();
	std::weak_ptr<STATE> m_wpState;
};