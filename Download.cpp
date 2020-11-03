#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <windows.h>

using namespace std;

int main () {
	char firstname[10];
	char lastname[10];
	
	cout << "Enter your first name:\n";
	cin >> firstname;
	cout << "Your first name is " << firstname;
	
	cout << "\nEnter your last name:\n";
	cin >> lastname;

	if (firstname == "Sam" || firstname == "sam" || firstname == "SAM")
	{
		cout << "\n" << lastname << endl;
	}

	else
		cout << "You're not Sam... !\n";
	system("pause");
	return 0;
}
