#include "TruckTList.h"
#include "HelpersT.h"
#include"TruckSerializer.h"
#include<iostream>

using namespace std;
using namespace TemplatedLists;

TruckList::TruckList()
{
	TruckSerializer::ReadTrucksFromFile(items, current); 
}

TruckList::~TruckList()
{
	//cout << "Dtor: Templaed Truck List" << endl;
	TruckSerializer::WriteTrucksToFile(items, current);
}

void TruckList::TheLargestNumOfTruckTrans() const
{
	TheLargestNumOfAllTrans(items, current);
}

void TruckList::Add(Truck& item)
{
	List<Truck>::Add(item);
}

void TruckList::WriteAllToConsole() const
{
	List<Truck>::WriteAllToConsole();
}