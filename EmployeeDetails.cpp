/*
Arnold Lang'at
Program requesting employees to enter their details and displaying them
BSE-01-0003/2025
15/06/2025
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class employee {
	public:
		int idnum;
		string name, occupation;
		void details(){
			cout << "GOOD DAY, ENTER YOUR DETAILS" << endl;
			cout << "Enter your ID Number: " << endl;
			cin >> idnum;
			cout << "Enter your Name: " << endl;
			cin >> name;
			cout << "Enter your Occupation: " <<endl;
			cin >> occupation;
		}
		void display(){
			cout << "\nYour ID number is " << idnum << endl;
			cout << "Your Name is " << name << endl;
			cout << "Your Occupation is an " << occupation << "\n" << endl;
		}		
};
int main(){
	employee zu_emp;
	
	zu_emp.details();
	zu_emp.display();
	
	system ("pause");
	return 0;
}