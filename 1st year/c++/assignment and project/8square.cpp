#include<iostream>
using namespace std;
int main()
{
	int num,a=0,b=1,c;
	cout<<"Enter the number "<<endl;
	cout<<">"; cin>>num;
	while(b <= num)
	{
		c = b*b;
		a = a + c; 
		b++;
		}
	cout<<"The sum of the Square of "<<num<<" is "<<a;
	return main();
	}
