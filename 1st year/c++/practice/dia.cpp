#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	for(a = 5; a >= 1; a--)
	{
		for(b = a; b >= 1; b--)
		{
			cout<<" ";
			}
			for(c = 1; c <= a; c++)
			{
				cout<<"*"<<" ";
				}
			cout<<"\n";
		}
	
	
	return 0;
	}

