#include"TruckSerializer.h"
#include<fstream>
using namespace std;
#define trucks_file_name "D:\\University\\навчальна праткика\\2\\logistics\\trucks.txt"

void TruckSerializer::ReadTrucksFromFile(Truck**& trucks, int& count)
{
	ifstream fin(trucks_file_name);
	trucks = new Truck * [100]; count = 0;

	string name, route; int shipments;
	while (!fin.eof())
	{
		fin >> name >> route >> shipments;
		trucks[count++] = new Truck(name, route, shipments);
	}

	fin.close();
}

void TruckSerializer::WriteTrucksToFile(Truck** trucks, int count)
{
	ofstream fout(trucks_file_name);

	for (int i = 0; i < count; i++)
	{
		fout << trucks[i]->GetName() << " " << trucks[i]->GetRoute() << " " << trucks[i]->GetShip();

		if (i != count - 1)
			fout << endl;
	}

	fout.close();
}

void TruckSerializer::ReadTrucksFromFile(Truck*& trucks, int& count)
{
	ifstream fin(trucks_file_name);
	trucks = new Truck[100]; count = 0;

	string name, route; int shipments;
	while (!fin.eof())
	{
		fin >> name >> route >> shipments;
		trucks[count++] = Truck(name, route, shipments);
	}

	fin.close();
}

void TruckSerializer::WriteTrucksToFile(Truck* trucks, int count)
{
	ofstream fout(trucks_file_name);

	for (int i = 0; i < count; i++)
	{
		fout << trucks[i].GetName() << " " << trucks[i].GetRoute() << " " << trucks[i].GetShip();

		if (i != count - 1)
			fout << endl;
	}

	fout.close();
}