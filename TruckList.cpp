#include "TruckList.h"
#include"TruckSerializer.h"
#include<iostream>
using namespace std;
using namespace InheritanceLists;

TruckList::TruckList()
{
	Truck** trucks;
	TruckSerializer::ReadTrucksFromFile(trucks, current);
	transports = (Transport**)trucks;
	//cout << "Truck list ctor" << endl;
}

TruckList::~TruckList()
{
	//TruckSerializer::WriteTrucksToFile((Truck**)transports, current);
	//cout << "Truck list dtor" << endl;
}

void TruckList::Add(Truck& truck)
{
	TransportList::Add(new Truck(truck));
	TruckSerializer::WriteTrucksToFile((Truck**)transports, current);
}

void TruckList::TheLargestNumOfTruckTrans() const
{
	WriteToConsoleTheLargestNumOfShip();
}

void TruckList::WriteAllToConsole() const
{
	TransportList::WriteAllToConsole();
}