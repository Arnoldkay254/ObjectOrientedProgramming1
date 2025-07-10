/*
Author: Arnold Lang'at
Reg NO: BSE-01-0003/2025
Description: Progam to calculate the Body Mass Index of a person
Date: 25/05/2025
Version 1
*/
#include <iostream>//cout, cin
#include <cstdlib>
#include <string>
using namespace std;

int main(){
	string name;
	float weight, height, BMI;
	
	cout<<"Enter your name: "<<endl;
	cin>>name;
	cout<<"Good Morning, "<<name<<endl;
	cout<<"Enter your Weight in Kilograms and Height in Metres respectively: "<<endl;
	cin>>weight>>height;
	BMI = weight / (height * height);
	
	if (BMI < 18.5){
		cout<<name<<", you are Underweight!!"<<endl;
	}
	else if(BMI < 25 ){
		cout<<name<<", you have Normal Weight!!"<<endl;
	}
	else if(BMI < 30){
		cout<<name<<", you are Overweight!!"<<endl;
	}
	else if(BMI >= 30){
		cout<<name<<", you are Obese!!"<<endl;
	}
	
	
	system("pause");
	return 0;
}