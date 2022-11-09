#pragma once

#include"ATruckList.h"
#include"APlaneList.h"

#include"TruckList.h"
#include"PlaneList.h"

#include"TruckTList.h"
#include"PlaneTList.h"

class AListFactory
{
public:
	virtual ATruckList* GetTruckList() = 0;
	virtual APlaneList* GetPlaneList() = 0;
};

class InheritanceListFactory : public AListFactory
{
public:
	ATruckList* GetTruckList()
	{
		return new InheritanceLists::TruckList;
	}

	APlaneList* GetPlaneList()
	{
		return new InheritanceLists::PlaneList;
	}
};

class TemplatedListFactory : public AListFactory
{
public:
	ATruckList* GetTruckList()
	{
		return new TemplatedLists::TruckList;
	}

	APlaneList* GetPlaneList()
	{
		return new TemplatedLists::PlaneList;
	}
};

class ListFactoryProvider
{
public:
	AListFactory* GetListFactory()
	{
		// some algorithm about what type of classes use
		//return new TemplatedListFactory();
		return new InheritanceListFactory();
	}
};