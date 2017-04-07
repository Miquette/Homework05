//NEW AND IMPROVED ACCOUNT CLASS DISREGARD THE PREVIOUS ONE
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
	const double annualInterestRate = 0.015;
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
	


	double getMonthlyInterestRate()     //Couldn't seem to get this one to work. Maybe because it's a double? I kept trying Steve.getMonthlyInterestRate.
	{
		return annualInterestRate / 12;
	}


	double withdraw(int amount)
	{
		transactions.push_back(-1);
		int newbalance;
		newbalance = balance - amount;
		return newbalance;
	}
	double deposit(int amount)
	{
		transactions.push_back(1);
		int newbalance;
		newbalance = balance + amount;
		return newbalance;
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
	
	Account George;
	George.setid(1122);
	George.setbalance(1000);
	Transaction t;

	cout << "Welcome to Miser Bank, George. Your account number is " << George.id << " and your current balance is " << George.balance << "." << endl;
	cout << "The current and static interest rate is " << George.getannualInterestRate * 100 << "%." << endl;
	cout << endl;
	cout << "If you withdrew $5 from your account, you would be left with $" << George.withdraw(5) << "." << endl;
	Transaction('W', 5, 1000, "withdrawal from account");
	cout << George.withdraw(4) << endl;
	Transaction('W', 4, George.withdraw(4), "deposit after withdrawal");
	cout << George.withdraw(2) << endl;
	Transaction('W', 2, George.withdraw(2));
	cout << "If you simply deposited the $30 without withdrawing, you would have $" << George.deposit(30) << " in your account." << endl;
	Transaction('D', 30, George.deposit(30), "deposit to account");
	cout << George.deposit(40) << endl;
	Transaction('D', 40, George.deposit(40), "deposit to account");
	cout << George.deposit(50) << endl;;
	Transaction('D', 50, George.deposit(50), "deposit into account");
	cout << "The monthly interest rate for you, George, is " << (George.getannualInterestRate / 12) * 100 << "%." << endl;

	cout << "The amount of transactions for you this month thus far is " << transactions.size() << endl;


	return 0;
}
