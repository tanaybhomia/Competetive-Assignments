#include <iostream>
using namespace std;
int main()
{
    int n,m,k,i,ans;
    // n students 
    // total k lectures 
    // m must watch lecture time 

    int watchtime,questions;
    cin>>n>>m>>k;
    watchtime = 0;
    while(n--)
    {
        int arr[k+1];
        for (i=0;i<k+1;i++)
        {
            cin>>arr[i];
        }
        for (i=0;i<k;i++)
        {
            watchtime = watchtime + arr[i];
        }
        questions = arr[k];
        if (watchtime >= m && questions <= 10)
        {
            ans = ans+1;
        }
    }
    cout<<ans<<endl;
}

// completed but stated wrong 