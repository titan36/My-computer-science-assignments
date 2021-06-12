#include <iostream>
using namespace std;
int main() 
{
    float number,ave,i=0, sum = 0.0;
    
    while(number != 0.0)
    {
		cout<<"Enter a number: ";
        cin>>number;
        sum += number;
        i = i + 1;
              
    }
        cout<<"Total sum = "<<sum;
        ave = sum/i;
        cout<<" The average = "<<ave;
   
    return 0;
}
