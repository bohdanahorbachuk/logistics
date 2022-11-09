#ifndef TRANSPORT_H
#define TRANSPORT_H

#include<string>
using namespace std;

class Transport
{
protected: 
	string name;
	int shipments;

	bool IsValidTransport(string name, int shipments);

public:
	Transport(string name = "", int shipments = 1);
	virtual void WriteToConsole();

	string GetName() const;
	int GetShip() const;
};

#endif
