#include<iostream>
using namespace std;
int add(int a,int b);

int area(int l,int w); //declaration

int area(int l,int w)  //define
{int c;
	
	c = l*w;
	return c;
	}
int main()
{
	int a,b;
	cout<<"enter length"<<endl;
	cin>>a;
	cout<<"enter width\n";
	cin>>b;
	int t;
	t = area(a,b);
	cout<<"area = "<<t;
	
	return 0;
	
}
