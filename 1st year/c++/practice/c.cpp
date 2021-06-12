#include <iostream>
#include <istream>
#include <math.h>
#include <string>
#include <cstdlib>
#include <cstring>
using namespace std;
int main()
{
	              cout<<"                      Quadratic equation solver \n"<<endl;

					           cout<<"s ------ to start the app"<<endl;
	                           cout<<"q ------ to stop the app"<<endl;
	                           cout<<"? ------ to know about the developer"<<endl;
					  
	              char num;
	              cout<<">";
	              cin>>num;
	              while(1)
	              {
				  if(num=='q')
				  {
				  break;
				  }
	            
	
	      switch (num)
	              {
 case 's':
					  {
	float a,b,c;
	double d,sol1,sol2;
	cout<< "please enter the value of A " <<endl;
	cout<<">";
	cin>>a;
	cout<<"please enter the value of B "<<endl;
	cout<<">";cin>>b;
	cout<<"please enter the value of C "<<endl;
	cout<<">";cin>>c;
	cout<<"you inserted "<<"a = "<<a<<" b = "<<b<<" c = "<<c<<endl;
	cout<<a<<"The Quadratic equation is "<<"x^2 + "<<b<<"x + "<<c<<endl;
	

		
	if(a == 0)
	{
	cout<<"a can't be zero"<<endl;
	}
	else
	{
		
		d = b*b - 4*a*c;
		if(d < 0)
		{
		   cout<<"No real solution"<<endl;
		}
		else
		
		{
			sol1 = (-b + sqrt(d));
		    sol2 = (-b - sqrt(d));
		
		cout<<"Solution One is = "<<sol1<<endl;
		cout<<"Solutuon Two is = "<<sol2<<endl;
	}
		}
					  
					  
	break;				  }
	}
cout<<"\n";
cout<<">";
cin>>num;	
}
return 0;	
	}
