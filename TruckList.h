#ifndef TRUCK_LIST
#define TRUCK_LIST

#include"ATruckList.h"
#include"Truck.h"
#include"TransportList.h"

namespace InheritanceLists
{
	class TruckList : private TransportList, public ATruckList
	{
	public:
		TruckList();
		~TruckList();

		void Add(Truck& truck);
		void TheLargestNumOfTruckTrans() const;
		void WriteAllToConsole() const;
	};
}

#endif