#include "PlaneList.h"
#include "PlaneSerializer.h"
#include<iostream>
using namespace std;
using namespace InheritanceLists;

PlaneList::PlaneList() 
{
	Plane** planes;
	PlaneSerializer::ReadPlanesFromFile(planes, current);
	transports = (Transport**)planes;
	//cout << "Planelist ctor" << endl;
}

PlaneList::~PlaneList()
{
	PlaneSerializer::WritePlanesToFile((Plane**)transports, current);
	//cout << "Plane list dtor" << endl;
}

void PlaneList::Add(Plane& plane)
{
	TransportList::Add(new Plane(plane));
}

void PlaneList::TheLargestNumOfAirTrans() const
{
	WriteToConsoleTheLargestNumOfShip();
}

void PlaneList::WriteAllToConsole() const
{
	TransportList::WriteAllToConsole();
}