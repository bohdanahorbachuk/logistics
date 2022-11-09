#ifndef PLANE_LIST
#define PLANE_LIST

#include"APlaneList.h"
#include"Plane.h"
#include"TransportList.h"

namespace InheritanceLists
{
	class PlaneList : private TransportList, public APlaneList
	{
	public:
		PlaneList();
		~PlaneList();

		void Add(Plane& plane);
		void TheLargestNumOfAirTrans() const;
		void WriteAllToConsole() const;
	};
}

#endif