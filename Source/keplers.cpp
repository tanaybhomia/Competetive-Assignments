// https://www.codechef.com/problems/KEPLERSLAW
// 992

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int t1,t2,r1,r2;
        cin>>t1>>t2>>r1>>r2;
        float a;
        float b;
        a = (float)t1*t1/(r1*r1*r1);
        b = (float)t2*t2/(r2*r2*r2);
        if (a == b)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}