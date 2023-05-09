// https://www.codechef.com/problems/CHFCLASS

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,sat,i;
        cin>>n;
        int days[n];
        for (i=1;i<=n;i++)
        {
            if (i%6 == 0)
            {
                sat++;
            }
        }
        cout<<sat<<endl;
        sat = 0;
    }
}