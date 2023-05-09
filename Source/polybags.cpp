#include <iostream>
using namespace std;
int main()
{
    int t,x,m;
    cin>>t;
    while(t--)
    {
        cin>>x;
        m = x%10;
        if (m == 0)
        {
            cout<<x/10<<endl;
        }
        else if (m != 0)
        {
            cout<<(x/10)+1<<endl;
        }
    }
}