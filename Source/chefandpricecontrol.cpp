// https://www.codechef.com/problems/PRICECON

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        int items[n];
        int before = 0;
        int after = 0;
        for (i=0;i<n;i++)
        {
            cin>>items[i];
        }
        for (i=0;i<n;i++)
        {
            before = items[i]+before;
        }
        for (i=0;i<n;i++)
        {
            if (items[i] > k)
            {
                items[i] = k;
            }
        }
        for (i=0;i<n;i++)
        {
            after = items[i]+after;
        }
        cout<<before-after<<endl;
    }
    return 0;
}