/*
Author: Arnold Lang'at
Reg NO: BSE-01-0003/2025
Description: Progam to find the Grade of Students from three subjects
Date: 25/05/2025
Version 1
*/
#include <iostream>//cout, cin
#include <cstdlib>
#include <string>
using namespace std;

int main(){
	float mat, com, lit, total, avg; 
	string name;
	char grade;
	
	cout<<"What is your name: "<<endl;
	cin>>name;
	cout<<"Good Morning Dear "<<name<<endl;
	cout<<"Enter your marks for Mathematics, Communication Skills and Literature: "<<endl;
	cin>>mat>>com>>lit;
	total = mat + com + lit;
	avg = total / 3.0;
	
	if (avg > 100){
		cout<<"There is an error in your marks, "<<name<<endl;
	}
	else if(avg >= 70){
		grade = 'A';
	}
	else if(avg >= 60){
        grade = 'B';
	}
	else if(avg >= 50){
		grade = 'C';
	}
	else if(avg >= 40){
		grade = 'D';
	}
	else{
		grade = 'E';	
	}
	cout<<name<<", your Total Marks are: "<<total<<endl;
	cout<<"Your Average is: "<<avg<<endl;
	cout<<"And your grade is: "<<grade<<endl;
	
	
	system("pause");
	return 0;
}
