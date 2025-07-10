/*
Author: Arnold Lang'at
Reg NO: BSE-01-0003/2025
Description: Program to compute bonus and net salary
Date: 22/05/2025
Version 1
*/

#include <iostream>//cout, cin
#include <cstdlib>
#include <string>
using namespace std;

int main(){
	float salary, service, bonus, tot_salary;
	
	cout<<"Enter your Salary and the Number of Years you've worked here mate: "<<endl;
	cin>>salary>>service;
	
	if (service > 10){
		bonus = 0.1 * salary;
	}
	else if (service>=6 && service<=10){
		bonus = 0.008 * salary;
	}
	else if (service<6){
		bonus = 0.005 * salary;
	}
	tot_salary = bonus + salary;
	
	cout<<"The Net Bonus is: "<<bonus<<endl;
	cout<<"The Net Salary is: "<<salary<<endl;
	cout<<"The Final Salary is: "<<tot_salary<<endl;
	
	system("pause");
	return 0;
}