#include <iostream>

using namespace std;

int main()
{
	int num,sum=0,average,i=0;
	cout<<"Enter the numbers \n";
	cout<<">";cin>>num;
	while(i <= num)
	
	{
		sum = i + sum;
		i++;
		}
		
		cout<<"The sum of the number from 1 to "<<num<<" is "<<sum<<endl;
		average = sum/num;
		cout<<"The average of "<<num<<" is " <<average<<endl;
	return 0;
}
