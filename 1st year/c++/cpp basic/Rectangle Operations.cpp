//This program is used to calculate the area,perimeter or diagonal length of a rectangle
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
	system("cls");
	int ch;
	int l, b;
	cout << "This program is used to calculate the area,perimeter or diagonal length of a rectangle";
	do {
		cout << "\n\nEnter your choice\n1.Area\n2.Perimeter\n3.Diagonal Length\n4.Exit\n";
		cin >> ch;
		if (ch == 1 || ch == 2 || ch == 3)
		{
			cout << "Enter the length and breadth of the rectangle:\n";
			cin >> l >> b;
		}
		switch (ch)
		{
		case 1:
		{cout << "The area of the rectangle is " << l*b;
		cin.ignore();
		cin.get();
		break;
		}
		case 2:
		{cout << "The perimeter of the rectangle is " << (2 * (l + b));
		cin.ignore();
		cin.get();
		break;
		}
		case 3:
		{cout << "The diagonal length of the rectangle is " << sqrt((l*l) + (b*b));
		cin.ignore();
		cin.get();
		break;}
		default:break;
		}
	} while (ch == 1 || ch == 2 || ch == 3);
		return 0;
}



	