//Sum of two numbers is S and their product is P. Find the two numbers.
#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	system("cls");
	int S, P, a, b, c;
	cout << "Enter the sum of the numbers:";
	cin >> S;
	cout << "Enter the product of the numbers:";
	cin >> P;
	if (S > 0)
		cout << "Quadratic equation formed is : x*x-" << S << "+" << P << endl;
	else
		cout << "Quadratic equation formed is: x*x+" << S << "+" << P << endl;
	a = 1;
	b = -S;
	c = P;
	cout << "Coefficients are a=" << a << ",b=" << b << ",c=" << c << endl;
	double discriminant = b*b - 4.0*a*c;
	double sqroot = sqrt(discriminant);
	double root1 = (-b + sqroot) / (2.0*a);
	double root2 = (-b - sqroot) / (2.0*a);
	cout << "Two numbers whose sum is " << S << " & product is " << P << " are:" << endl;
	cout << "Number 1:" << root1 << "\nNumber 2:" << root2 << endl;
	cin.ignore();
	cin.get();
	return 0;
}
