#ifndef TRUCK_H
#define TRUCK_H

#include"Transport.h"
#include<string>
using namespace std;

class Truck : public Transport
{
	string route;

	bool IsValid(string route);
public:
	Truck(string name = "", string route = "", int shipments = 1);
	void WriteToConsole();

	string GetRoute() const;
};

#endif