#include <iostream>
using namespace std;
int main()
{
    int t,i,n,x,m;
    // n is the number of items 
    // x is the cost of items 
    int items;
    int cost;

    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        if (n==3)
        {
            cost = (n-1)*x;
        }
        else if (n%3 == 0)
        {
            m = n/3;
            cost = (n-m)*x;
            m = 0;
        }
        else 
        {
            cost = (n-1)*x;
        }
        cout<<cost<<endl;
    }
}