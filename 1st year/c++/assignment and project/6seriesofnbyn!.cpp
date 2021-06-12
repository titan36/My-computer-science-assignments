#include <iostream>
using namespace std;

int main()
{
    float term=1,sum=0,value, fct = 1;
    int nth;
    cout << "\nFind the sum of the series 1, 1, 1/2, 1/6, 1/24....n/n!:\n";
    cout << "---------------------------------------------------------\n";
    cout << " Enter nth term: ";
    cin >> nth;
 	
    do{
		fct = term*fct;
		value = term/fct;
		sum = sum + value;
		term++;
		}
    while(term <= nth);
		cout << "The sum of the nth value is: " << sum << endl;
    
    return 0;
}
