#pragma once

#include"Truck.h"
#include"AList.h"

class ATruckList : public AList<Truck>
{
public:
	virtual void TheLargestNumOfTruckTrans() const = 0;
	virtual ~ATruckList() {}
};
