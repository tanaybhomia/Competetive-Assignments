#include <iostream>
using namespace std;
int main()
{
    int t;
    int a,b,c = 0;
    cin>>t;
    while(t--)
    {
        int h,ts;
        float cc;
        int grade;
        cin>>h>>cc>>ts;
        if (h>50 && cc <0.7 && ts > 5600)
        {
            cout<<10<<endl;
        }
        else if (h>50 && cc <0.7)
        {
            cout<<9<<endl;
        }
        else if (cc <0.7 && ts > 5600)
        {
            cout<<8<<endl;
        }
        else if (h>50 && ts > 5600)
        {
            cout<<7<<endl;
        }
        else if (h>50 || cc <0.7 || ts > 5600)
        {
            cout<<6<<endl;
        }
        else
        {
            cout<<5<<endl;
        }
    }
}