#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,x;
        cin>>n>>l>>x;
        if (n == 0 || x == 0)
        {
            cout<<0<<endl;
        }
        else 
        {
            int r = n-l;
            cout<<min(l,r)*x<<endl;
        }
    }
}