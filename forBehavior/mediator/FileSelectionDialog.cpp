#include "stdafx.h"
#include "FileSelectionDialog.h"
#include "ListWidget.h"
#include "EditWidget.h"

CFileSelectionDialog::CFileSelectionDialog()
{
	m_arrWidgets[0] = new CListWidget(this, _T("DirectoryList"));
	m_arrWidgets[1] = new CListWidget(this, _T("FileList"));
	m_arrWidgets[2] = new CEditWidget(this, _T("FilterEditor"));
	m_arrWidgets[3] = new CEditWidget(this, _T("SelectionEditor"));
}

CFileSelectionDialog::~CFileSelectionDialog()
{
	for(unsigned int i = 0; i < 4; i++){
		delete m_arrWidgets[i];
	}
}

void CFileSelectionDialog::handleEvent(Widgets inWhich)
{
	std::wcout<<_T("handling ")<<m_arrWidgets[inWhich]->getName()<<std::endl;
}

void CFileSelectionDialog::widgetChanged(CWidget* pWidget)
{
	if(pWidget == m_arrWidgets[DirectoryList]){
		m_arrWidgets[DirectoryList]->query();
		m_arrWidgets[FileList]->update();
		m_arrWidgets[FilterEditor]->update();
		m_arrWidgets[SelectionEditor]->update();
	}else if(pWidget == m_arrWidgets[FileList]){
		m_arrWidgets[DirectoryList]->update();
		m_arrWidgets[FileList]->query();
		m_arrWidgets[FilterEditor]->update();
		m_arrWidgets[SelectionEditor]->update();
	}else if(pWidget == m_arrWidgets[FilterEditor]){
		m_arrWidgets[DirectoryList]->update();
		m_arrWidgets[FileList]->update();
		m_arrWidgets[FilterEditor]->query();
		m_arrWidgets[SelectionEditor]->update();
	}else if(pWidget == m_arrWidgets[SelectionEditor]){
		m_arrWidgets[DirectoryList]->update();
		m_arrWidgets[FileList]->update();
		m_arrWidgets[FilterEditor]->update();
		m_arrWidgets[SelectionEditor]->query();
	}
}

CWidget* CFileSelectionDialog::getWidget(Widgets which)
{
	return m_arrWidgets[which];
}