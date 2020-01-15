#include "stdafx.h"
#include "Widget.h"
#include "FileSelectionDialog.h"

using namespace std;
void CWidget::changed()
{
	wcout<<_T("widget changed")<<endl;
	m_pMediator->widgetChanged(this);
}

tstring CWidget::getName()
{
	return m_sName;
}