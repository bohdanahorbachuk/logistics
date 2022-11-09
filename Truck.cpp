#include"Truck.h"
#include<iostream>
using namespace std;

Truck::Truck(string name, string route, int shipments) : Transport(name, shipments) 
{
	if (!IsValid(route) || !IsValidTransport(name, shipments))
		throw "Invalid input data for the Truck!!";

	this->route = route;
}

bool Truck::IsValid(string route)
{
	return true;
}

void Truck::WriteToConsole()
{
	cout << name << " " << route << " - " << shipments; 
}

string Truck::GetRoute() const
{
	return route;
}