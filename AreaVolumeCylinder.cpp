/*
Arnold Lang'at
BSE-01-0003/2025
Program to calculate the area of a Cylinder using Classes
12/06/2025
*/
#include <iostream>
#include <cstdlib>
using namespace std;

class cylinder {//Declaring class
	public://Access specifier
		float radius, height;//Data members
			float CalcSurfaceArea(){//Methods
				return (2 * 3.142 * radius * radius)+(2 * 3.142 * radius * height); 	
			}
			float CalcVolume(){//Methods
				return 3.142 * radius * radius * height; 
			}
};
int main(){
	cylinder c1;//Giving the cylinder room an object
	float surfaceArea, volume;//Giving the two calculates their variables
	
	cout<<"Enter the radius of the cylinder: "<<endl;
	cin>>c1.radius;//Linking the radius to the c1 object 
	cout<<"Enter the height of the cylinder: "<<endl;
	cin>>c1.height;//Linking the height to the c1 object
	surfaceArea = c1.CalcSurfaceArea();//Calling the method
	volume = c1.CalcVolume();//Calling the method
	
	cout<<"\nThe Surface Area of your cylinder is: "<<surfaceArea<<" Square Metres"<<endl;
	cout<<"The Volume of your cylinder is: "<<volume<<" Cubic Metres\n"<<endl;
	
	
	system("pause");
	return 0;
}