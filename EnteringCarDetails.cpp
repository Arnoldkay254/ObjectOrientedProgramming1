/*
Arnold Lang'at
BSE-01-0003/2025
Program to dispaly a Car's Details using a constructor
22/06/2025
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Car {
	private:
		string brand, model;
		float price;
		int mileage;
		
    public:
			Car(string b, string m, float p, int mi){
			brand = b;
			model = m;
			price = p;
			mileage = mi;
			}
			void display(){
				cout << "THESE ARE THE DETAILS YOU ENTERED\n" << endl;
				cout << "BRAND: " << brand << endl;
				cout << "MODEL: " << model << endl;
				cout << "PRICE: $" << price << endl;
				cout << "MILEAGE: " << mileage << endl;
			}
			void drive(int distance){
				mileage += distance;
				cout << "Mileage after driving " << distance << " miles: " << mileage << " miles" << endl;
			}
};
int main(){
	Car car1("Toyota", "Corolla", 2000, 5000);
	
	car1.display();
	car1.drive(150);
	car1.drive(300);
	
	system ("pause");
	return 0;
}
