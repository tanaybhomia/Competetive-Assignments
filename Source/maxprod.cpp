#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d,x,y,z;
        int type1,type2,remdays;
        cin>>d>>x>>y>>z;
        type1 = x*7;
        remdays = 7-d;
        type2 = (y*d)+(remdays*z);
        if (type1>type2)
        {
            cout<<type1<<endl;
        }
        else if (type1 < type2)
        {
            cout<<type2<<endl;
        }
        else if (type1 == type2) 
        {
            cout<<type2<<endl;
        }
    }
}