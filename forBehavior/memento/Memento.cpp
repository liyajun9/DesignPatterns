#include "pch.h"
#include "Memento.h"

std::weak_ptr<STATE> CMemento::GetState()
{
	return m_wpState;
}