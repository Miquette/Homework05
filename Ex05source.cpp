#include <iostream>
#include <string>
using namespace std;

template <typename X>
int linearSearch(const X list[], X key, const int arraySize)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i])
			return i;
	}
	return -1;
}


int main()
{
	const int arraysize = 8;
	const int lista[arraysize] = {2, 4, 6, 8, 10, 12, 14, 16};
	const double listb[arraysize] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9};
	const string listc[arraysize] = {"Bolin", "Mako", "Korra", "Asami", "Tenzin", "Bumi", "Kya", "Lynn"};

	cout << linearSearch(lista, 14, 8);
	cout << linearSearch(listb, 3.3, 8);
	cout << linearSearch(listc, "Korra" , 8);

	return 0;
}