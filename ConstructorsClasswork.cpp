/*
Arnold Lang'at
BSE-01-0003/2025
Program to learn about constructors
19/06/2025
*/
#include <iostream>
#include <string>
using namespace std;

class Car {
	public:
		string brand, model;
		int year;
		Car( string x, string y, int z ){
			brand = x;
			model = y;
			year = z;
        }
        ~Car(){
			cout << "Put the fries in the bag" <<endl;		
		}
};

int main(){
	Car cobj1( "BMW", "X5", 1999 );
	Car cobj2( "Ford", "Mustang", 1969);
	Car cobj3( "Bugatti", "C3", 1776);
	
	cout << cobj1.brand << " " << cobj1.model << " " << cobj1.year << " " <<endl;
	cout << cobj2.brand << " " << cobj2.model << " " << cobj2.year << " " <<endl;
	cout << cobj3.brand << " " << cobj3.model << " " << cobj3.year << " " <<endl;
	
	return 0;
}