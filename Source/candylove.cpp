// https://www.codechef.com/problems/CNDLOVE
// 1054

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n; // number of packs  
        cin>>n;
        int arr[n]; // number of candies in a pack
        
        int i,j = 0,sum = 0;
        for (i=0;i<n;i++)
        {
            cin>>arr[i];
            sum = sum+arr[i];
        }
        if (sum%2 == 0)
        {
            cout<<"NO"<<endl;
        }
        else 
        {
            cout<<"YES"<<endl;
        }
    }
}