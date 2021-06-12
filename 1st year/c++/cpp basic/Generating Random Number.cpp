#include<stdlib.h>
#include<iostream>
using namespace std;
int main()
{
	system("cls");
	int rnum, i;
	for (i = 0;i < 5;i++)
	{
		cout << (rnum = rand()) << endl;
	}
	cin.get();
	return 0;
}