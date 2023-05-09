f#include <iostream>
using namespace std;
int main()
{
    int t,a,b,c,d;
    int ang1,ang2;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>d;
        ang1 = a+c;
        ang2 = b+d;
        if (ang1 == 180 && ang2 ==180)
        {
            cout<<"Yes";
        }
        else 
        {
            cout<<"No";
        }
    }
}
