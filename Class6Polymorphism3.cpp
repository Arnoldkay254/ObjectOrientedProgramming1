#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Shape {
	public:
		virtual double area() {
			cout << "Area Calculation not defined for generic shape." << endl;
		}
};

class Rectangle : public Shape {
	public:
		double length, width;
		double area() {
			return length * width;
		}
};

class Circle : public Shape {
	public:
	double radius;
	double area() {
		return 3.142 * radius * radius;
	}
};

int main() {
	Rectangle r1;
	Circle c1;
	double areaR, areaC;
	
	cout << "Enter your length: " << endl;
	cin >> r1.length;
	cout << "Enter your width: " << endl;
	cin >> r1.width;
	cout << "Enter your radius: " << endl;
	cin >> c1.radius;
	
	areaR = r1.area();
	areaC = c1.area();
	
	cout << "Rectangle area is: " << areaR << endl;
	cout << "Circle area is: " << areaC << endl;
	
	system ("pause");
	return 0;
}