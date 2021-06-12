#include<iostream>

using namespace std;

int main()
{
        int a, b, x, y ,t, gcd, lcm;

        cout<<"enter the first integer:\n";
        cin>>x;
        cout<<"enter the second integer:\n";
        cin>>y;

        a=x;
        b=y;

        while (b != 0)
        {
                 t = b;
                 b = a % b;
                 a = t;
        }

        gcd = a;
        lcm = (x*y)/gcd;

        cout<<"greatest common factor of "<<x<<" and "<<y<<" IS:"<<gcd<<endl;
        cout<<"least common muliplayer of "<<x<<" and "<<y<<" IS:"<<lcm<<endl;

        return main();
}
