#include<iostream>
using namespace std;

int main()
{
   int num, i, j;

   cout << "Enter the numbers"<<endl;
   cout<<">"; cin>>num;
   while(num != 0)
   {
	   i = num % 10;
	   j = j*10 + i;
	   num = num / 10;
	   
	   
	   }
   cout<<"The reverse of the number is"<<" is "<<j;
  

  
   return 0;
}
