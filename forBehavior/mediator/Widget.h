#pragma once
#include "..\..\..\YJ_WinTools\Log\tstring.h"

class CFileSelectionDialog;
class CWidget{
public:
	CWidget(CFileSelectionDialog* pMediator, tstring sName):m_pMediator(pMediator), m_sName(sName){}
	virtual ~CWidget(){}

	virtual void changed();
	virtual void query() = 0;     //query if self changed
	virtual void update() = 0; //update if other widget changed

	tstring getName();

protected:
	tstring m_sName;

private:
	CWidget();
	CFileSelectionDialog* m_pMediator;
};