#include "stdafx.h"
#include "Test.h"
#include "forCreation\prototypeMode\ConcretPrototype.h"
#include <iostream>
#include <tchar.h>
#include <memory>

using namespace std;

void CTest::TestProtoTypeMode()
{
	//ͨ����¡ֱ�Ӵ���һ������
	CConcretPrototype obj(2);
	shared_ptr<CConcretPrototype> spObj2(obj.Clone());
	wcout<<_T("obj1=")<<obj.GetData()<<endl;
	wcout<<_T("obj2=")<<spObj2->GetData()<<endl;
}