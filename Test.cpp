#include "stdafx.h"
#include "Test.h"
#include "forCreation\prototypeMode\ConcretPrototype.h"
#include <iostream>
#include <tchar.h>
#include <memory>
#include "forCreation\singletonMode\Singleton.h"

using namespace std;

void CTest::TestProtoTypePattern()
{
	//通过克隆直接创建一个对象
	CConcretPrototype obj(2);
	shared_ptr<CConcretPrototype> spObj2(obj.Clone());
	wcout<<_T("obj1=")<<obj.GetData()<<endl;
	wcout<<_T("obj2=")<<spObj2->GetData()<<endl;
}

void CTest::TestSingletonPattern()
{
	CSingleton::GetInstance().SetData(12);
	wcout<<"Singleton="<<CSingleton::GetInstance().GetData()<<endl;
	wcout<<"Singleton="<<CSingleton::GetInstance().GetData()<<endl;

	CSingleton::GetInstance().SetData(24);
	wcout<<"Singleton="<<CSingleton::GetInstance().GetData()<<endl;
	wcout<<"Singleton="<<CSingleton::GetInstance().GetData()<<endl;
}