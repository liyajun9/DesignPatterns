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
#include "forStructure\Facade\Facade.h"
#include "forStructure\Composite\Component.h"
#include "forStructure\Composite\Composite.h"
#include "forStructure\Composite\Leaf.h"
#include "forStructure\Bridge\AbstractImpl.h"
#include "forStructure\Bridge\ConcreteImpl.h"
#include "forStructure\Bridge\ConcreteInterface.h"
#include "forStructure\Bridge\ConcreteImplNew.h"
#include "forStructure\FlyWeight\FlyWeightClient.h"
#include "forStructure\FlyWeight\FlyWeightFactory.h"

using namespace std;

void CTest::TestProtoTypePattern()
{
	//通过克隆直接创建一个对象
	CConcretPrototype obj(2);
	unique_ptr<CConcretPrototype> spObj2(obj.Clone());
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
	unique_ptr<CProduct> spProduct1(factoryA.CreateProduct());
	unique_ptr<CProduct> spProduct2(factoryB.CreateProduct());
	spProduct1->play();
	spProduct2->play();
}

void CTest::TestBuilderPattern()
{
	unique_ptr<CDirector>  upDirectorA(new CDirector(new CConcreteBuilderA()));
	unique_ptr<CDirector> upDirectorB(new CDirector(new CConcreteBuilderB()));
	
	upDirectorA->Construct();
	upDirectorB->Construct();

	upDirectorA->GetProduct()->Show();
	upDirectorB->GetProduct()->Show();
}

void CTest::TestAdapterPattern()
{
	CCurrClass currClass;
	CAdapter adapter(&currClass);
	adapter.Request();
}

void CTest::TestDecoratePattern()
{
	CSportsCar sportsCar(_T("Ferrari"));
	sportsCar.Show();

	CLogoDecorateCar logoDecorateCar(&sportsCar);
	logoDecorateCar.Show();

	CWingDecorateCar wingDecorateCar(&logoDecorateCar);
	wingDecorateCar.Show();
}

void CTest::TestProxyPattern()
{
	CClient client;
	CProxy proxy(&client, 1);
	std::wcout<<_T("proxy1:")<<std::endl;
	proxy.Request();

	CProxy proxy2(&client, 11);
	std::wcout<<_T("proxy2:")<<std::endl;
	proxy2.Request();
}

void CTest::TestFacadePattern()
{
	CFacade facade;
	facade.Produce();
}

void CTest::TestCompositePattern()
{
	//Add 2 leafs to composite
	shared_ptr<CComponent> spLeaf1 = make_shared<CLeaf>(_T("Leaf1"));
	shared_ptr<CComponent> spLeaf2 = make_shared<CLeaf>(_T("Leaf2"));
	CComposite composite;
	composite.Add(spLeaf1);
	composite.Add(spLeaf2);
	composite.ShowName();

	//Remove 1st. leaf from composite
	weak_ptr<CComponent> wpLeaf = composite.GetComponent(0);
	if(!wpLeaf.expired()){
		composite.Remove(wpLeaf.lock());
	}
	composite.ShowName();
}

void CTest::TestBridgePattern()
{
	//same interface, 2 different implementation
	shared_ptr<CAbstractionImp> spImp = make_shared<CConcreteImpl>();
	CConcreteInterface cinterface1(spImp);

	shared_ptr<CAbstractionImp> spImpNew = make_shared<CConcreteImplNew>();
	CConcreteInterface cinterface2(spImpNew);

	cinterface1.Operate();
	wcout<<endl;
	cinterface2.Operate();
}

void CTest::TestFlyWeightPattern()
{
	//we logically have 6 FlyWeight object, but only 2 objects stored in factory physically
	CFlyWeightClient client; 
	EXDATA exData1(1, 2, 3);
	client.AddFlyWeight(exData1, 1, 1, 1);
	EXDATA exData2(2, 3, 4);
	client.AddFlyWeight(exData2, 1, 1, 1);
	EXDATA exData3(3, 4, 5);
	client.AddFlyWeight(exData3, 1, 1, 1);
	EXDATA exData4(4, 5, 6);
	client.AddFlyWeight(exData4, 2, 2, 2);
	EXDATA exData5(6, 7, 8);
	client.AddFlyWeight(exData5, 2, 2, 2);
	EXDATA exData6(8, 9, 10);
	client.AddFlyWeight(exData6, 2, 2, 2);

	wcout<<_T("Objects in factory: ")<<CFlyWeightFactory::GetInstance().GetSize()<<endl;
	wcout<<_T("Extrinsic data in client: ")<<client.GetSize()<<endl;
	client.ShowAllFlyWeights();
}