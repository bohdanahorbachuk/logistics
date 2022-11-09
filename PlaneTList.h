#ifndef PLANE_T_LIST
#define PLANE_T_LIST

#include"APlaneList.h"
#include"Plane.h"
#include"List.h"

namespace TemplatedLists
{
	class PlaneList : private List<Plane>, public APlaneList
	{
	public:
		PlaneList();
		~PlaneList();

		void Add(Plane& item);
		void WriteAllToConsole() const;
		void TheLargestNumOfAirTrans() const;
	};
}

#endif