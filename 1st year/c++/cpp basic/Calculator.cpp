#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int ch;
	float a, b;
	cout << "Enter the two numbers:\n";
	cin >> a >> b;
	cout << "Enter the operation:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n";
	cin >> ch;
	switch (ch)
	{
	case 1:
	{cout << "The sum of the numbers is " << (a + b);
	break;}
	case 2:
	{cout << "The difference between the numbers is " << (a - b);
	break;}
	case 3:
	{cout << "The product of the numbers is " << (a*b);
	break;}
	case 4:
	{cout << "The division of the numbers is " << (a / b);
	break;}
	default:cout << "Enter correct choice ";
	}
	cin.ignore();
	cin.get();
	return 0;
}