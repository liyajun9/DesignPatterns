#include "stdafx.h"
#include "Memento.h"

weak_ptr<STATE> CMemento::GetState()
{
	return m_wpState;
}