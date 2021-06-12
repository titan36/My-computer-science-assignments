//This program simply calculates the factorial of a number
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int num, factorial = 1;
	cout << "Enter the number:";
	cin >> num;
	int i = num;
	while (i > 0)
	{
		factorial = factorial*i;
		i--;
	}
	cout << "The factorial of the number is " << factorial;
	cin.ignore();
	cin.get();
	return 0;
}