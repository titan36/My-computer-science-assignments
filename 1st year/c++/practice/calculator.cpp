//Martha Sander 02-03-2017 - Assignment 3.
//Sources: none.
/*
Write a program that mimics a calculator.  The program should take as input two integers and the operation to be performed.  The operator should be read as a char variable.  It should then output the numbers, the operator and the result.  For division and the mod operator, if the denominator is zero, output an error message.  Assume the first number is the numerator and the second is the denominator for division operations.  Your program should do the following operations:  + (plus), - (minus), * (multiplication), / (division), and the % (mod operator for the remainder). 
*/

#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
	//Define variables.
	int num1 = 0, num2 = 0;
	//double result = 0;
	char operation;

	//Output calculation message to user.
	cout << "Please enter an integer for the numerator: " << endl;
	cin >> num1;
	cout << "Please enter an integer for the denominator: " << endl;
	cin >> num2;
	cout << "Please enter operation: " << endl;
	cin >> operation;
	
	//Determine calculations using if, else.
	//Output error message for denominator 0 on division and ramainder.
	if (operation == '/')
	{	
		if (num2 == 0)
			cout <<"Error: denominator cannot be 0" << endl;
		else
		{
			cout << "Your result is: " << endl;
			cout << "" << num1 << " " << operation << " " << num2 << " = " << static_cast<double> (num1) / num2 << endl;
		}
	}
	else if (operation == '*')
	{	
		cout << "Your result is: " << endl;
		cout << "" << num1 << " " << operation << " " << num2 << " = " << num1 * num2 << endl;
	}
	else if (operation == '+')
	{	
		cout << "Your result is: " << endl;
		cout << "" << num1 << " " << operation << " " << num2 << " = " << num1 + num2 << endl;
	}
	else if (operation == '-')
	{
		cout << "Your result is: " << endl;
		cout << "" << num1 << " " << operation << " " << num2 << " = " << num1 - num2 << endl;
	}
	else if (operation == '%')
	{
		if (num2 == 0)
			cout << "Error: denominator cannot be 0" << endl;
		else
		{
			cout << "Your result is: " << endl;
			cout << "" << num1 << " " << operation << " " << num2 << " = " << num1 % num2 << endl;
		}
	}	
        return 0;
}
