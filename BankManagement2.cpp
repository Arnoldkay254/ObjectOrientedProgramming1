/*
Arnold Lang'at
BSE-01-0003/2025
Program to display a Simple Bank Management System pt2
04/07/2025
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class AccountHolder {
	protected:
		string name;
		
		public:
			void setName(string n){
				name = n;
			}
			string getName(){
				return name;
			}
};
class BankAccount : public AccountHolder {
	private:
		int accountNumber;
		double balance;
		
		public:
			BankAccount(string n, int a, double b){
				name = n;
				accountNumber = a;
				balance = b;
			}
			int getAccountNumber(){
				return accountNumber;
			}
			double getBalance(){
				return balance;
			}
};
class SavingsAccount : public BankAccount{
	private:
		double interestRate;
		
		public:
			SavingsAccount(string n, int a, double b, double i)
			:BankAccount(n, a, b){
				interestRate = i;
			}
			double getInterestRate(){
				return interestRate;
			}
};