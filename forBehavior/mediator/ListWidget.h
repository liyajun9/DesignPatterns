#pragma once
#include "Widget.h"

class CListWidget : public CWidget{
public:
	CListWidget(CFileSelectionDialog* pMediator, tstring sName):CWidget(pMediator, sName){}
	virtual ~CListWidget(){}

	virtual void query();
	virtual void update();
};