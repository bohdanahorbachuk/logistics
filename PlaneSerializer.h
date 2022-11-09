#ifndef PLANE_SERIALISER
#define PLANE_SERIALISER

#include"Plane.h"

class PlaneSerializer
{
public:
	static void ReadPlanesFromFile(Plane**& planes, int& count);
	static void WritePlanesToFile(Plane** planes, int count);

	static void ReadPlanesFromFile(Plane*& planes, int& count);
	static void WritePlanesToFile(Plane* planes, int count);
};

#endif