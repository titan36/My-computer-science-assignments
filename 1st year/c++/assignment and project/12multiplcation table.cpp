#include <iostream>
#include <math.h>
#include <string>
using namespace std;
int main()
{
   int n,i,num;
   cout<<"Enter the value of the first multiplier\n";
   cout<<">";cin>>n;
   cout<<"Enter the value of the second multiplier\n";
   cout<<">";cin>>num;
   for(i = 1; i <= num; i++)
   {
	   cout<<n;
	   cout<<" * ";
	   cout<<i;
	   cout<<" = ";
	   cout<<n*i;
	   cout<<"\n";
	   }
   return 0;
   }
   
   
