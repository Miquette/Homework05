#ifndef SHUFFLE_H
#define SHUFFLE_H
#include <ctime>

template<typename T>
void shuffle(vector<T>& v)// shuffles the vector numbers around
{
	srand(time(NULL));
	T swap, a, b;
	for (int x = 0; x < v.size(); x++)
	{
		a = rand() % v.size();
		b = rand() % v.size();
		swap = v[a];
		v[a] = v[b];
		v[b] = swap;
	}
}




#endif // SHUFFLE_H

