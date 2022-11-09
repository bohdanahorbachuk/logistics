#ifndef MENU_H
#define MENU_H

#include"ATruckList.h"
#include"APlaneList.h"

class Menu
{

	ATruckList* truckList;
	APlaneList* planeList;

public:
	void Show();
	Menu();
	~Menu();

private:
	void ReInitTruckList();
	void ReInitPlaneList();

	void showBaseMenu();

	void handleShowAllTrucks();
	void handleTheLargestNumOfTruckTrans();

	void handleShowAllPlanes();
	void handleTheLargestNumOfAirTrans();

};

#endif