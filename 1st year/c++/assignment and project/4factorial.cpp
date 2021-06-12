#include<iostream>
using namespace std;
int main()
{
int num;	

do
{
int b,fac=1;	
cout<<"Enter positive number\n";

cout<<">"; cin>>num;

for(b = num; b >= 1; b--)
 {
	
fac = fac*b;

 }
cout<<fac<<endl;
}
while(num != 0);
 
return 0;
}
