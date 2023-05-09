// https://www.codechef.com/problems/MINDAYSRET

#include <iostream>
using namespace std;
int main()
{
    int t,rem,ans;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        if (n%k == 0)
        {
            cout<<n/k<<endl;
        }
        else if (n!=k)
        {

            ans = (n/k)+1;
            cout<<ans<<endl;
            // n/k + 1;
            // should give the ans 
        }
    }
}