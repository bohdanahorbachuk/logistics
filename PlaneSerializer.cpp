#include"PlaneSerializer.h"
#include<fstream>
using namespace std;
#define planes_file_name "D:\\University\\навчальна праткика\\2\\logistics\\planes.txt"

void PlaneSerializer::ReadPlanesFromFile(Plane**& planes, int& count)
{
	ifstream fin(planes_file_name);
	planes = new Plane * [100]; count = 0;

	string name; double weight; int shipments;
	while (!fin.eof())
	{
		fin >> name >> weight >> shipments;
		planes[count++] = new Plane(name, weight, shipments);
	}

	fin.close();
}

void PlaneSerializer::WritePlanesToFile(Plane** planes, int count)
{
	ofstream fout(planes_file_name);

	for (int i = 0; i < count; i++)
	{
		fout << planes[i]->GetName() << " " << planes[i]->GetWeight() << " " << planes[i]->GetShip();

		if (i != count - 1)
			fout << endl;
	}

	fout.close();
}

void PlaneSerializer::ReadPlanesFromFile(Plane*& planes, int& count)
{
	ifstream fin(planes_file_name);
	planes = new Plane[100]; count = 0;

	string name; double weight; int shipments;
	while (!fin.eof())
	{
		fin >> name >> weight >> shipments;
		planes[count++] = Plane(name, weight, shipments);
	}

	fin.close();
}

void PlaneSerializer::WritePlanesToFile(Plane* planes, int count)
{
	ofstream fout(planes_file_name);

	for (int i = 0; i < count; i++)
	{
		fout << planes[i].GetName() << " " << planes[i].GetWeight() << " " << planes[i].GetShip();

		if (i != count - 1)
			fout << endl;
	}

	fout.close();
}