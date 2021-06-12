#include<iostream>
using namespace std;
int main()
{
	int a,b,c=1;
	cin>>b;
	for(a=b; a>=1; a--)
    {
    if(b >= 0)
    {
      c = a*c;
   cout<<c<<endl; }
    

    else
    {
		cout<<"please enter positive number only";
		}
      
	}
		
	
	return 0;
	}
