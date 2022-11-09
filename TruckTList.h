#ifndef TRUCK_T_LIST
#define TRUCK_T_LIST

#include"ATruckList.h"
#include"Truck.h"
#include"List.h"

namespace TemplatedLists
{
	class TruckList : private List<Truck>, public ATruckList
	{
	public:
		TruckList();
		~TruckList();

		void Add(Truck& item);
		void WriteAllToConsole() const;
		void TheLargestNumOfTruckTrans() const;
	};
}

#endif