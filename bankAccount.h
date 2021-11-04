/* File name: bankAccount.h
 * This is the header file for a program bank account that is used
 * to deposit, withdraw, and cheack balance
 *
 * Made by Joshua Gillespie 
 * 11/3/2021
 *
 */

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <iostream>


class bankAccount {
	private:
		string customerName;
		int balance;

		void setName(string n);
		void setBalance(float bal);

	public:
		bankAccount(string n, float bal);
		string getName();
		float getBalance();
		void deposit(float dep);
		void withdraw(float draw);
};

#endif
