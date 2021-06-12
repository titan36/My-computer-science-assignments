#include<iostream>
using namespace std;
int main()
{
   long double number;

	do{
int fac = 1;
	int i;
	cout<<"please enter the positive number to calculate factorial\n";
	cout<<">";
	cin>>number;
	
	for(i = number; i >= 1; i-- )
	{
		fac = fac * i;
		}
	cout<<"factorial of "<<number<<" is "<<fac<<endl;
	}
	while(number != 0);
    
	return 0;
	}



