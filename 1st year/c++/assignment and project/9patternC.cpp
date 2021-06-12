#include <iostream>

using namespace std;

void rec(int h,int w)
{
	for(int i = 0; i <  h; i++)
	{
		cout<<"\n";
		for(int j = 0; j < w; j++)
		{
			if(i == 0 || i == h-1 || j ==0 || j == w-1)
				cout<<"*";
			else
				cout<<" ";
				
			}
		}
	}

int main ()
{
int h =4,w=5;
rec(h,w);  
		return 0;
	}
