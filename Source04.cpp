/////////////////////
// Miquette Orren
// CS 172
// HW05 problem 12.20
////////////////

#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include "Shuffle.h"
using namespace std;



int main()
{
	vector <int> intv;
	
	cout << "Name 10 integers: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << "Integer " << i << ":" << endl;
		int num;
		cin >> num;
		intv.push_back[num];
	}

	shuffle(intv);/// not working for some reason... calling the variable wrong?

	cout << "Your shuffled function is ";
	for (int j = 0; j < intv.size(); j++)
	{
		cout << intv[j] << endl;
	}

	return 0;
}