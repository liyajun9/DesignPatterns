#pragma once
#include "Widget.h"

class CEditWidget : public CWidget{
public:
	CEditWidget(CFileSelectionDialog* pMediator, tstring sName):CWidget(pMediator, sName){}
	virtual ~CEditWidget(){}

	virtual void query();
	virtual void update();
};