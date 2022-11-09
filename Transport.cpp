#include"Transport.h"
#include<iostream>
using namespace std;

Transport::Transport(string name, int shipments)
{
	this->name = name;
	this->shipments = shipments;
}

bool Transport::IsValidTransport(string name, int shipments)
{
	if (shipments < 0 )
		return false;

	return true;
}

void Transport::WriteToConsole()
{
	cout << name << " - " << shipments;
}

string Transport::GetName() const
{
	return name;
}
int Transport::GetShip() const
{
	return shipments;
}