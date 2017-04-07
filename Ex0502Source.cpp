#include <iostream>
#include <string>
using namespace std;

template <typename T>
bool isSorted(const T list[], const int size)
{
	for (int x = 0; x < (size - 1); x++)
	{
		if (list[x] <= list[x + 1])
			true;
		else if (list[x] > list[x + 1])
			return false;
	}
}


int main()
{
	const int arraysize = 8;
	int lista[arraysize] = {2, 4, 6, 8, 10, 12, 14, 16}; //should output true
	double listb[arraysize] = {1.2, 0.7, 3.4, 4.5, 3.3, 6.7, 7.8, 8.9}; //should output false
	string listc[arraysize] = {"Aang", "Katara", "Azula", "Mai", "Sokka", "Toph", "Zuko"}; //should output false

	cout << isSorted(lista, 8) << endl;
	cout << isSorted(listb, 8) << endl;
	cout << isSorted(listc, 8) << endl;

	return 0;
}