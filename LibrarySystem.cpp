/*
Arnold Lang'at
BSE-01-0003/2025
Program to create a Simple Library System.
06/07/2025
*/
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

class Person {
	protected:
		string name;
		
		public:
			void setName(string n){
				name = n;
			}
			string getName(){
				return name;
			}
};
class LibraryMember: public Person {
	private:
		int memberID;
		int booksBorrowed;
		
		public:
			LibraryMember(string n, int md, int b) {
                setName(n);
				memberID = md;
				booksBorrowed = b;
			}
			int getmemberID(){
				return memberID;
			}
			int getbooksBorrowed(){
				return booksBorrowed;
			}
};
class PremiumMember : public LibraryMember {
	private:
		double membershipFee;
		
		public:
			PremiumMember(string n, int md, int b, double mf):LibraryMember(n, md, b) {
				membershipFee = mf;
			}
			double getMembershipFee(){
				return membershipFee;
			}
};