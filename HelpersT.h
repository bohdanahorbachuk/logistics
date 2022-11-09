#ifndef HELPERS_T
#define HELPERS_T

template <class T>
void TheLargestNumOfAllTrans(T* items, int count)
{
	int maxShip = items[0].GetShip(); int maxShipIdx = 0;

	for (int i = 1; i < count; i++)
	{
		if (items[i].GetShip() > maxShip)
		{
			maxShip = items[i].GetShip();
			maxShipIdx = i;
		}
	}

	items[maxShipIdx].WriteToConsole();
}

#endif