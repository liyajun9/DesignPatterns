#include "stdafx.h"
#include "LivingRoomElement.h"
#include "VisitorBase.h"

void CLivingRoomElement::accept(CVisitorBase& visitor)
{
	std::wcout<<_T("BedRoom is being visited...")<<std::endl;
	visitor.visitLivingRoom(this);
}
