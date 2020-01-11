#pragma  once
#include "Product.h"

class CConcreteProductB : public CProduct{
public:
	CConcreteProductB(){}
	virtual ~CConcreteProductB(){}

	virtual void play();
};