#include "VisitorBase.h"

class CParentVisitor : public CVisitorBase{
public:
	~CParentVisitor(){}

	virtual void visitBedRoom(CElementBase* pElement);
	virtual void visitLivingRoom(CElementBase* pElement);
};