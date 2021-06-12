#include<iostream>
using namespace std;
int main()
{
int ftemp,ctemp;
//for temperature in fahrenheit
cout << "Enter temperature in fahrenheit: ";
cin >> ftemp;
ctemp = (ftemp-32) * 5 / 9;
cout << "Equivalent in Celsius is: " << ctemp << '\n';
return 0;
}
