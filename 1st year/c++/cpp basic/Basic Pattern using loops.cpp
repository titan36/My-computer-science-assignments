#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
	//system("cls");
	for (int i = 10;i >= 1;i--)
	{
		for (int j = i;j >= 1;j--)
		{
			cout << "*";
		}
		cout << "\n";
	}
	cin.get();
	return 0;
}
