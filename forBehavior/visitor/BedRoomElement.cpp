#include "stdafx.h"
#include "BedRoomElement.h"
#include "VisitorBase.h"

void CBedRoomElement::accept(CVisitorBase& visitor)
{
	std::wcout<<_T("BedRoom is being visited...")<<std::endl;
	visitor.visitBedRoom(this);
}
