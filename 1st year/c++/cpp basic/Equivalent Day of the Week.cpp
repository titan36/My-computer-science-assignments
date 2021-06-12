//This program prints the equivalent Day of Week for the entered Day Number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int n;
	system("cls");
	cout << "Enter the Day number:";
	cin >> n;
	switch(n)
	{
	case 1: {cout << "\nSunday";break;}
	case 2: {cout << "\nMonday";break;}
	case 3: {cout << "\nTuesday";break;}
	case 4: {cout << "\nWednesday";break;}
	case 5: {cout << "\nThursday";break;}
	case 6: {cout << "\nFriday";break;}
	case 7: {cout << "\nSaturday";break;}
	default: {cout << "Enter a choice between 1-7";}
	}
	cin.ignore();
	cin.get();
	return 0;
}