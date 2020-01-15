#pragma once
#include <list>
#include "AbstractObserver.h"

using namespace std;
class CSubject{
public:
	CSubject():m_bChanged(false), m_nData(0){}

	void registerObserver(CAbstractObserver* pObserver);
	void removeObserver(CAbstractObserver* pObserver);

	void setChanged(bool bChanged);
	void notify(CAbstractObserver* pObserver);
	void notifyAll();

	void notifyData(CAbstractObserver* pObserver);
	void notifyDataAll();

public:
	int GetData() const;
	void SetData(int nData); 

private:
	list<CAbstractObserver*> m_listObserver;
	bool m_bChanged;

	int m_nData;
};