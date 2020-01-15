#pragma once

class CVisitorBase;
class CElementBase{
public:
	virtual ~CElementBase(){};

	virtual void accept(CVisitorBase& visitor) = 0;
};