#include "TransportList.h"
#include<iostream>
using namespace std;

TransportList::TransportList()
{
	current = 0;
	transports = new Transport * [100];
	//cout << "Transport list ctor" << endl;
}

TransportList::~TransportList()
{
	for (int i = 0; i < current; i++)
		delete transports[i];

	delete[] transports;
	//cout << "Transport list dtor" << endl;
}

void TransportList::Add(Transport* transport)
{
	transports[current] = transport;
	current++;
}

void TransportList::WriteAllToConsole() const
{
	for (int i = 0; i < current; i++)
	{
		transports[i]->WriteToConsole();
		cout << endl;
	}
}

void TransportList::WriteToConsoleTheLargestNumOfShip() const
{
	int maxShip = transports[0]->GetShip(); int maxShipIdx = 0;

	for (int i = 1; i < current; i++)
	{
		if (transports[i]->GetShip() > maxShip)
		{
			maxShip = (*transports[i]).GetShip();
			maxShipIdx = i;
		}
	}

	transports[maxShipIdx]->WriteToConsole();
}