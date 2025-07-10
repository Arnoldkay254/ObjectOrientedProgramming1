/*
Arnold Lang'at
BSE-01-0003/2025
Program to find the Simple Interest using functions
05/06/2025
*/
#include <iostream>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

float calcInterest(int amount, float time, float rate){
	return amount * time * rate * 0.01;
}
int main(){
	int amount;
	float time, rate, intrest;
	cout << "We are going to calculate your Simple Interest, enter the following: " <<endl;
	cout << "Enter your Principle Ammount: " <<endl;
	cin >> amount;
	cout << "Enter your Time: " << endl;
	cin >> time;
	cout << "Enter your rate: " << endl;
	cin >> rate;
	intrest = calcInterest(amount, time, rate);
	cout << "The Simple Interest for your ammount is: $" << intrest << endl;
	
	system("pause");
	return 0;
}