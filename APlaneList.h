#pragma once

#include"Plane.h"
#include"AList.h"

class APlaneList : public AList<Plane>
{
public:
	virtual void TheLargestNumOfAirTrans() const = 0;
	virtual ~APlaneList() {}
};
