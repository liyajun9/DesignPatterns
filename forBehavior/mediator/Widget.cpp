#include "stdafx.h"
#include "Widget.h"
#include "FileSelectionDialog.h"

void CWidget::changed()
{
	std::wcout<<_T("widget changed")<<std::endl;
	m_pMediator->widgetChanged(this);
}

tstring CWidget::getName()
{
	return m_sName;
}