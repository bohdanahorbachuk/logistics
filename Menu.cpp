#include"Menu.h"
#include"Truck.h"
#include"Factory.h"
#include "Welcome.h"

#include<iostream>
#include<string>
using namespace std;

Menu::Menu()
{
	ListFactoryProvider factoryProvider;
	AListFactory* listFactory = factoryProvider.GetListFactory();

	truckList = listFactory->GetTruckList();
	planeList = listFactory->GetPlaneList();
}

void Menu::ReInitTruckList() 
{
	ListFactoryProvider factoryProvider;
	AListFactory* listFactory = factoryProvider.GetListFactory();

	truckList = listFactory->GetTruckList();
}

void Menu::ReInitPlaneList()
{
	ListFactoryProvider factoryProvider;
	AListFactory* listFactory = factoryProvider.GetListFactory();

	planeList = listFactory->GetPlaneList();
}


Menu::~Menu()
{
	delete truckList;
	delete planeList;
}

void Menu::Show()
{
	Acquaintance user;
	cout << user;
	cin >> user;
	cout << "Welcome to Logistics Company, User!";
	char userInput;

	do {
		showBaseMenu();

		cin >> userInput;

		if (userInput == '1') {
			handleShowAllTrucks();
			continue;
		}

		if (userInput == '2') {
			handleTheLargestNumOfTruckTrans();
			continue;
		}

		if (userInput == '3') {
			handleShowAllPlanes();
			continue;
		}

		if (userInput == '4') {
			handleTheLargestNumOfAirTrans();
			continue;
		}

	} while (userInput != '0');
}

void Menu::showBaseMenu()
{
	cout << endl
		<< "Please select an option:\n"
		<< "1. Show all trucks.\n"
		<< "2. Print the truck that made the largest number of transports.\n"
		<< "3. Show all planes.\n"
		<< "4. Print the plane that made the largest number of transports.\n"
		<< "0. Exit.\n";
}



void Menu::handleShowAllTrucks()
{
	cout << "All trucks:\n";

	ReInitTruckList();
	truckList->WriteAllToConsole();
}

void Menu::handleTheLargestNumOfTruckTrans()
{
	ReInitTruckList();
	truckList->TheLargestNumOfTruckTrans();
}


void Menu::handleShowAllPlanes()
{
	cout << "All planes:\n";

	ReInitPlaneList();
	planeList->WriteAllToConsole();
}
void Menu::handleTheLargestNumOfAirTrans()
{
	ReInitPlaneList();
	planeList->TheLargestNumOfAirTrans();
}


