// https://www.codechef.com/problems/CHFDBT
// 1121

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count = 0;
        cin>>n;
        if (n%2 == 1)
        {
            cout<<n/2+1<<endl;
        }
        else 
        {
            cout<<n/2<<endl;
        }
    }
}