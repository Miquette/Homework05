///////////////////
// Miquette Orren
// CS 172
// HW05 problem 12.25
//////////////////

#include <iostream>
#include <string>
#include <ctime>
#include <vector>
#include "HeaderAccount05.h"
using namespace std;

template <typename Transaction>
class Account
{
private:
	int id;
	double balance;
	const double annualInterestRate = 4.0;
	string name;
	vector <Transaction> transactions;
public:
	Account()
	{
		id = 0;
		balance = 0;
		annualInterestRate;
	}

	Account(string newname, int newid, double newbalance)
	{
		name = newname;
		id = newid;
		balance = newbalance;
	}

	double getid()
	{
		return id;
	}
	void setid(int newid)
	{
		id = newid;
	}

	double getbalance()
	{
		return balance;
	}
	void setbalance(double newbalance)
	{
		balance = newbalance;
	}

	double getannualinterestrate()
	{
		return annualInterestRate;
	}
	void setannualinterestrate(double newannualrate)
	{
		annualInterestRate = newannualrate;
	}


	double getMonthlyInterestRate()     //Couldn't seem to get this one to work. Maybe because it's a double? I kept trying Steve.getMonthlyInterestRate.
	{
		return annualInterestRate / 12;
	}


	double withdraw(int amount)
	{
		transactions.push_back(1);
		return balance - amount;
	}
	double deposit(int amount)
	{
		transactions.push_back(1);
		return balance + amount;
	}

};




class Transaction
{
private:
	Date date;
	char type;
	double amount;
	double balance;
	string description;
public:
	Transaction(char ttype, double aamount, double bbalance, string ddescription)
	{
		type = ttype;
		amount = aamount;
		balance = bbalance;
		description = ddescription;
	}
};



int main()
{





	return 0;
}
