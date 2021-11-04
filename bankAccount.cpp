/* File name bankAccount.cpp
 *
 * class for performing deposit, withdraw, and checking balance
 * Written by Joshua Gillespie, november 3, 2021.
 */

#include <iostream>
#include "bankAccount.h"

using namespace std;

//constructor.

bankAccount::bankAccount(string n, float bal){
	//cout<<"inside constructor"<<endl;
	customerName = n;
	balance = bal;
}


string bankAccount::getName(){
	//cout<<"inside getname"<<endl;
	return customerName;
}

float bankAccount::getBalance(){
	//cout<<"inside getBalance"<<endl;
	return balance;
}

void bankAccount::deposit(float dep){
	//cout<<"inside deposit"<<endl;
	balance = balance + dep;
}

void bankAccount::withdraw(float draw){
	//cout<<"inside withdraw"<<endl;
	balance = balance - draw;
}
