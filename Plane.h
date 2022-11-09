#ifndef PLANE_H
#define PLANE_H

#include"Transport.h"
#include<string>
using namespace std;

class Plane : public Transport
{
	int weight;

	bool IsValid(double weight);
public:
	Plane(string name = "", double weight = 1.0, int shipments = 1);
	void WriteToConsole();

	double GetWeight() const;
};

#endif