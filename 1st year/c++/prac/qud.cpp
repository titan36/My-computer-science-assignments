#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main()
{
float a,b,c;
	double d,sol1,sol2;
	cout<< "     please enter the value of A " <<endl;
	cout<<">>";
	cin>>a;
	cout<<"      please enter the value of B "<<endl;
	cout<<">>";cin>>b;
	cout<<"      please enter the value of C "<<endl;
	cout<<">>";cin>>c;
	cout<<"      you inserted "<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
	cout<<"      The Quadratic equation is "<<a<<"x^2 + "<<b<<"x + "<<c<<endl;
	

		
	if(a == 0)
	{
	cout<<"               sa can't be zero"<<endl;
	}
	else
	{
		
		d = b*b - 4*a*c;
		if(d < 0)
		{
		   cout<<"  No real solution"<<endl;
		}
		else
		
		{
			sol1 = (-b + sqrt(d));
		    sol2 = (-b - sqrt(d));
		
		cout<<"      Solution One is = "<<sol1<<endl;
		cout<<"      Solutuon Two is = "<<sol2<<endl;
	}
		}
	

return 0;
}
