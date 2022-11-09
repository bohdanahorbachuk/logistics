#include"Plane.h"
#include<iostream>
using namespace std;

Plane::Plane(string name, double weight, int shipments) : Transport(name, shipments)
{
	if (!IsValid(weight) || !IsValidTransport(name, shipments))
		throw "Invalid input data for the Plane!!";

	this->weight = weight;
}

bool Plane::IsValid(double weight)
{
	if (weight < 0 || weight > 1000)
		return false;

	return true;
}

void Plane::WriteToConsole()
{
	cout << name << " " << shipments << ", weight: " << weight;
}

double Plane::GetWeight() const
{
	return weight;
}