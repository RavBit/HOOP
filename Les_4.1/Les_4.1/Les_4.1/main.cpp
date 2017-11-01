#include <string>
#include <iostream>
#include "Queue.h"

template <typename T>

void SortArray(T *array, int arraySize)
{
	for (int i = 0; i < arraySize - 1; i++)
	{
		for (int i2 = i + 1; i2 < arraySize; i2++)
		{
			if (array[i] > array[i2])
			{
				T object;
				object = array[i];
				array[i] = array[i2];
				array[i2] = object;
			
			}
		}
	}
}


int main()
{
	float fArray[5] = { 1.3f, 1.59f, 2.435f, 4.5f, 1.3f };

	std::cout << "Deze array bestaat uit de volgende elementen:" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "Element: " << i << " : " << fArray[i] << ", ";

	SortArray(fArray, 5);
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;

	std::cout << "Deze array gesorteerd bestaat uit de volgende objecten/items:" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "Item: " << i << " : " << fArray[i] << ", ";

	std::cout << "" << std::endl;
	std::cout << "" << std::endl;

	std::string sArray[5] = { "test", "sergi", "hond", "kat", "parkiet" };

	std::cout << "Deze array bestaat uit de volgende objecten/items::" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "Item: " << i << " : " << sArray[i] << ", ";

	SortArray(sArray, 5);
	std::cout << "" << std::endl;
	std::cout << "" << std::endl;

	std::cout << "Deze array gesorteerd bestaat uit de volgende objecten/items::" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << "Item: " << i << " : " << sArray[i] << ", ";

	std::cout << "" << std::endl;
	std::cout << "" << std::endl;

	system("pause");
}