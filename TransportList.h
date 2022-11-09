#ifndef TRANSPORT_LIST
#define TRANSPORT_LIST

#include"Transport.h"

class TransportList
{
protected:
	Transport** transports;
	int current;
	void Add(Transport* transport);
	void WriteToConsoleTheLargestNumOfShip() const;

public:
	TransportList();
	~TransportList();

	void WriteAllToConsole() const;
};

#endif