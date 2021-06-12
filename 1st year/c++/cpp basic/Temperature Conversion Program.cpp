#include<iostream>
using namespace std;
int main()
{
	int choice;
	float temp, newtemp;
	cout << "Temperature Conversion Menu\nplease type 1 to convert Fahrenheit to Celsius\nplease type 2 to convert Celsius to Farenheit\n";
	cin >> choice;
	if (choice == 1)
	{
		cout << "Enter the temperature in Fahrenheit:";
		cin >> temp;
		newtemp = (temp - 32) / 1.8;
		cout << "The temperature in Celsius is:" << newtemp;
	}
	else
	{
		cout << "Enter the temperature in Celsius:";
		cin >> temp;
		newtemp = (1.8*temp) + 32;
		cout << "The temperature in Fahrenheit is:" << newtemp;
	}
	cin.ignore();
	cin.get();
	return 0;
}
