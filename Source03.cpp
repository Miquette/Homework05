#include <iostream>
#include <string>
#include <vector>
using namespace std;




int main()
{
	vector<int>(); //constructs an empty vector with the specified element type

	vector<int>intVector;
	for (int x = 0; x < 10; x++)//inputs default values 1-10 for the int vector
	{
		intVector.push_back(x + 1);
	}
	cout << "Numbers in int vector: " << endl;
	for (int z = 0; z < intVector.size(); z++)
	{
		cout << intVector[z] << endl;
	}
	cout << endl;
	 if (intVector.empty())
	{
		intVector.push_back(11);
		cout << intVector[1] << endl;
	}
	 else if (!intVector.empty())
	 {
		 intVector.push_back(15);
		 for (int a = 0; a < intVector.size(); a++)
		 {
			 cout << intVector[a] << endl;
		 }
	 }

	 vector<int> intVector2; //implementing another vector so you can swap data with first vector
	 for (int r = 20; 20 < 31; r++)
	 {
		 cout << intVector2[r] << endl;
	 }
	 intVector2.swap(intVector);
	 cout << intVector[5] << endl;//should output 25


	vector<string>stringVector(5,""); //string vector
	cout << "Enter 5 string values: " << endl;
	for (int y = 1; y < 6; y++)
	{
		cout << "String " << y << ":" << endl;
		string thing;
		cin >> thing;
		stringVector.push_back(thing);
	}
	stringVector.pop_back();
	cout << stringVector.at(7) << " " << endl;



	return 0;
}