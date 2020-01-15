#pragma once

class CSubject;
class CAbstractObserver{
	friend CSubject;
public:
	virtual ~CAbstractObserver(){}

protected:
	virtual void update() = 0;
	virtual void update(const CSubject& subject) = 0;
};