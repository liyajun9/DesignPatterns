#pragma once
#include "WorkObj.h"
#include <memory>
using namespace std;

class CWorkObj;

class CMemento{
public:
	CMemento(weak_ptr<STATE> wpState):m_wpState(wpState){}

	weak_ptr<STATE> GetState();

	friend class CWorkObj; //only CWorkObj can write to memento
private:
	CMemento();
	weak_ptr<STATE> m_wpState;
};