#include "stdafx.h"
#include "Test.h"
#include <iostream>
#include <tchar.h>
#include <memory>
#include "forCreation\prototypePattern\ConcretPrototype.h"
#include "forCreation\singletonPattern\Singleton.h"
#include "forCreation\factoryMethod\ConcreteProductA.h"
#include "forCreation\factoryMethod\ConcreteFactoryA.h"
#include "forCreation\factoryMethod\ConcreteProductB.h"
#include "forCreation\factoryMethod\ConcreteFactoryB.h"
#include "forCreation\builderPattern\Director.h"
#include "forCreation\builderPattern\ConcreteBuilderA.h"
#include "forCreation\builderPattern\ConcreteBuilderB.h"
#include "forStructure\Adapter\CurrClass.h"
#include "forStructure\Adapter\Adapter.h"
#include "forStructure\Decorate\Car.h"
#include "forStructure\Decorate\SportsCar.h"
#include "forStructure\Decorate\LogoDecorateCar.h"
#include "forStructure\Decorate\WingDecorateCar.h"
#include "forStructure\Proxy\ClientBase.h"
#include "forStructure\Proxy\Client.h"
#include "forStructure\Proxy\Proxy.h"

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

void CTest::TestFactoryMethod()
{
	CConcreteFactoryA factoryA;
	CConcreteFactoryB factoryB;
	shared_ptr<CProduct> spProduct1 = factoryA.CreateProduct();
	shared_ptr<CProduct> spProduct2 = factoryB.CreateProduct();
	spProduct1->play();
	spProduct2->play();
}

void CTest::TestBuilderPattern()
{
	shared_ptr<CDirector>  spDirectorA = make_shared<CDirector>(new CConcreteBuilderA());
	shared_ptr<CDirector> spDirectorB = make_shared<CDirector>(new CConcreteBuilderB());
	spDirectorA->Construct();
	spDirectorB->Construct();

	spDirectorA->GetProduct()->Show();
	spDirectorB->GetProduct()->Show();
}

void CTest::TestAdapterPattern()
{
	shared_ptr<CCurrClass> spCurrClass = make_shared<CCurrClass>();
	CAdapter adapter(spCurrClass.get());
	adapter.Request();
}

void CTest::TestDecoratePattern()
{
	shared_ptr<CCar> spCar = make_shared<CSportsCar>(_T("Ferrari"));
	spCar->Show();
	shared_ptr<CCar> spLogoSportsCar = make_shared<CLogoDecorateCar>(spCar.get());
	spLogoSportsCar->Show();
	shared_ptr<CCar> spWingSportsCar = make_shared<CWingDecorateCar>(spLogoSportsCar.get());
	spWingSportsCar->Show();
}

void CTest::TestProxyPattern()
{
	shared_ptr<CClientBase> spClient = make_shared<CClient>();
	shared_ptr<CClientBase> spProxy1 = make_shared<CProxy>(spClient.get(), 1);
	std::wcout<<_T("proxy1:")<<std::endl;
	spProxy1->Request();
	shared_ptr<CClientBase> spProxy2 = make_shared<CProxy>(spClient.get(), 11);
	std::wcout<<_T("proxy2:")<<std::endl;
	spProxy2->Request();
}