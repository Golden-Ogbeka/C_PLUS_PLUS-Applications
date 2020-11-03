#include<iostream>
using namespace std;
int main(){
	cout<<"=============================================================================";
	cout<<"\nWelcome User, Good day to you\n";
	int month;
	int day;
	int hour;
	int minute;
	cout<<"\nEnter this month's corresponding integer: ";
	cin>>month;
	cout<<"\nWhat day is this: ";
	cin>>day;
	cout<<"\nWhat is the time(hours{24 hour}): ";
	cin>>hour;
	cout<<"\nWhat is the time(minutes): ";
	cin>>minute;
	char course[6];
	cout<<"\nWhat course do you want to prepare for: ";
	for(int i=0;i<6;i++)
	{
		cin>>course[i];
	}
	if (course=="GST211")
	{
		cout<<"GST211 comes up on Saturday 28th of November by 10am\n";
	}
}
