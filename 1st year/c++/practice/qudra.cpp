#include <iostream>
#include <cmath>
#include <cstdlib>
#include <cstring>
using namespace std;
int main ()
{
	double a,b,c,x1,x2;
	char x;
	cout<<"Enter the value of a=";
	cin>>a;
	cout<<"Enter the value of b=";
	cin>>b;
	cout<<"Enter the value of c=";
	cin>>c;
	cout<<"The quadratic equation is:"<<a<<endl;
	cout<<"x*x+"<<b;
	cout<<"*x+"<<c<<endl;
	if
	(a==0)
	cout<<"Not a valid equation"<<endl;
	
	if
	((b*b-4*a*c)>0)
	{
		x2=(b*b)-(4*a*c);
		x1=-b+sqrt(x2);
		cout<<"Root="<<x1<<endl;
	}
	if
	((b*b-4*a*c)<0)
	{
		cout<<"Not a real root"<<endl;
	}
	return 0;	
}
