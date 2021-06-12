#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	double radius, area, perimeter;
	double pi = 3.14159;
	cout << "Enter radius of the circle:\n";
	cin >> radius;
	perimeter = 2 * pi*radius;
	area = pi*radius*radius;
	cout << "Area of the circle is " << area << endl;
	cout << "The perimeter of the circle is " << perimeter << endl;
	_getch();
	return 0;
}


