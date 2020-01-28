#pragma once
#include <memory>
#include <tchar.h>
class CMemento;

typedef struct state{
	TCHAR content[260];
	bool isOpen;
}STATE;

class CWorkObj{
public:
	CWorkObj():m_bIsOpen(false){}

	void SetContent(const TCHAR* lpContent, int nLen);
	const TCHAR* GetContent() const;
	void Open();
	void Close();
	bool GetIsOpen() const;

	CMemento* CreateMemento(); 
	void SaveToMemento(CMemento* pMemento);
	void RecoverFromMemento(CMemento* pMemento);

private:
	TCHAR m_content[260];
	bool m_bIsOpen;

	std::shared_ptr<STATE> m_spState;
};