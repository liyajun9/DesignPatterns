#pragma once
#include "Widget.h"

class CFileSelectionDialog{
public:
	enum Widgets{
		DirectoryList,
		FileList,
		FilterEditor,
		SelectionEditor
	};
	CFileSelectionDialog();
	virtual ~CFileSelectionDialog();

	void handleEvent(Widgets inWhich);
	void widgetChanged(CWidget* pWidget);

	CWidget* getWidget(Widgets which);

private:
	CFileSelectionDialog(const CFileSelectionDialog& rhs);
	CFileSelectionDialog& operator =(const CFileSelectionDialog& rhs);

	CWidget* m_arrWidgets[4];
};