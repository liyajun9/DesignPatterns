#pragma once
#include "Component.h"
#include "..\ttype.h"

class CLeaf : public CComponent{
public:
	CLeaf(const tstring& sName);

	virtual void ShowName();

private:
	CLeaf();
	tstring m_sName;

};