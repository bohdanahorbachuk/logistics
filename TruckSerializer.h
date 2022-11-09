#ifndef TRUCK_SERIALISER
#define TRUCK_SERIALISER

#include"Truck.h"

class TruckSerializer
{
public:
	static void ReadTrucksFromFile(Truck**& trucks, int& count);
	static void WriteTrucksToFile(Truck** trucks, int count);

	static void ReadTrucksFromFile(Truck*& trucks, int& count);
	static void WriteTrucksToFile(Truck* trucks, int count);
};

#endif