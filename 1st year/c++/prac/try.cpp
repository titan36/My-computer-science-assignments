#include<iostream>
using namespace std;
int main()
{
   int number ,i fac=1;
cout<<"please enter the positive number to calculate factorial\n";
	
	cin>>number;
	
	for(i = number; i >= 1; i-- )
	{
		fac = fac * i;
		}
	cout<<"factorial of "<<number<<" is "<<fac<<endl;
	}
