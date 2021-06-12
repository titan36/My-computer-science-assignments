#include<iostream>
using namespace std;
int main()

{
	int salary;
	cout<<"please enter the salary : ";
	cin>>salary;
	if(salary<=600)
	cout<<"tax is equal to : "<<salary*0<<endl<<"and the net pay is : "<<salary;
	else
	if (salary<=1650)
	cout<<"tax is equal to : "<<salary*0.1-60<<endl<<endl<<"and the net pay is : "<<salary-(salary*0.1-60);
	else
	if (salary<=3200)
	cout<<"tax is equal to : "<<salary*0.15-142.5<<endl<<endl<<"and the net pay is : "<<salary-(salary*0.15-142.5);
	else
	if (salary<=5500)
	cout<<"tax is equal to : "<<salary*0.20-302.5<<endl<<endl<<"and the net pay is : "<<salary-(salary*0.20-302.5);
	else
	if (salary<=7800)
	cout<<"tax is equal to : "<<salary*0.25-565<<endl<<endl<<"and the net pay is : "<<salary-(salary*0.25-565);
	else
	if (salary<=10900)
	cout<<"tax is equal to : "<<salary*0.30-950<<endl<<endl<<"and the net pay is : "<<salary-(salary*0.30-950);
	else
	if (salary>10900)
	cout<<"tax is equal to : "<<salary*0.35-1500<<endl<<endl<<"and the net pay is : "<<salary-(salary*0.35-1500);
	
	return 0;
	
}
