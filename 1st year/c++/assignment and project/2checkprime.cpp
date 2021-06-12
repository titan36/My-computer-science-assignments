#include<iostream>
using namespace std;

int main()
{
   int num, i, j=0; 

   cout << "Enter a number"<<endl;
   cout<<">"; cin>>num;

   for(i = 1; i <= num; i++)
   {
	   if(num%i == 0)
		{	
			j++;
        }
   }
   
   if (j == 2)
   {
      cout << "\n" << num << " is a prime number.\n";
   }
   else
      cout << "\n"<< num << " is not a prime number.\n";

  
   return main();
}





