/*
Arnold Lang'at
BSE-01-0003/2025
Program to Calculate the Total Amount of Wages for a worker using functions
07/06/2025
*/
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;
// Function to calculate gross pay
double calcGrossPay(double hours, double wage) {
    if (hours <= 40) {
        return hours * wage;
    } else {
        double regularPay = 40 * wage;
        double overtimePay = (hours - 40) * wage * 1.5;
        return regularPay + overtimePay;
    }
}

// Function to calculate taxes
double calcTaxes(double grossPay) {
    if (grossPay <= 600) {
        return grossPay * 0.15;
    } else {
        return (600 * 0.15) + ((grossPay - 600) * 0.20);
    }
}

// Function to calculate net pay
double calcNetPay(double grossPay, double taxes) {
    return grossPay - taxes;
}

int main() {
    double hours, wage, grossPay, taxes, netPay;

    // Input
    cout << "We are going to calculate the Total Wages you are going to earn:" <<endl;
    cout << "Enter hours worked in a week: " << endl;
    cin >> hours;
    cout << "Enter your hourly wage: " << endl;
    cin >> wage;

    // Calculations using functions
    grossPay = calcGrossPay(hours, wage);
    taxes = calcTaxes(grossPay);
    netPay = calcNetPay(grossPay, taxes);

    // Output
    cout << "Your Gross pay was: $" << grossPay << endl;
    cout << "Your Taxes was: $" << taxes << endl;
    cout << "Your NET PAY was: $" << netPay << endl;
	
	system("pause");
	return 0;
}

