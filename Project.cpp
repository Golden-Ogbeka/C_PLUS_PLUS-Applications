#include<iostream>
using namespace std;
int main(){ 
	cout<<"=============================================================================";	
	cout<<"\nWelcome User, Good day to you\n";
	int month;
	int day;
	int year;
	int month1;
	cout<<"Enter the month: ";
	cin>>month;
	if (month="January" || "january"){
		month1=1;
	}
	if (month="February" || "february"){
		month1=2;
	}
	if (month="March" || "march"){
		month1=3;
	}
	if (month="April" || "april"){
		month1=4;
	}
	if (month="May" || "may"){
		month1=5;
	}
	if (month="June" || "june"){
		month1=6;
	}
	if (month="July" || "july"){
		month1=7;
	}
	if (month="August" || "august"){
		month1=8;
	}
	if (month="September" || "september"){
		month1=9;
	}
	if (month="October" || "october"){
		month1=10;
	}
	if (month="November" || "november"){
		month1=11;
	}
	if (month="December" || "december"){
		month1=12;
	}
	cout<<month1;
}