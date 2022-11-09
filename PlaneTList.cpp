#include "PlaneTList.h"
#include"HelpersT.h"
#include"PlaneSerializer.h"
#include<iostream>

using namespace std;
using namespace TemplatedLists;

PlaneList::PlaneList()
{
	PlaneSerializer::ReadPlanesFromFile(items, current);
}

PlaneList::~PlaneList()
{
	//cout << "Dtor: Templaed Plane List" << endl;
	PlaneSerializer::WritePlanesToFile(items, current);
}

void PlaneList::TheLargestNumOfAirTrans() const
{
	TheLargestNumOfAllTrans(items, current);
}

void PlaneList::Add(Plane& item)
{
	List<Plane>::Add(item);
}

void PlaneList::WriteAllToConsole() const
{
	List<Plane>::WriteAllToConsole();
}