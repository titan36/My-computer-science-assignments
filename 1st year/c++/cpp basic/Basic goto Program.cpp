#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	system("cls");
	int a = 0;
start:
	cout << "\n" << ++a;
	if (a < 20)goto start;
	cin.get();
	return 0;
}
