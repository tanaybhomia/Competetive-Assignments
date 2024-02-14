// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CHEFSTEP
// 1110

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n];
        for (int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        for (int i = 0;i<n;i++)
        {
            if (arr[i]%x == 0)
            {
                cout<<1;
            }
            else 
            {
                cout<<0;
            }
        }
        cout<<endl;
    }
}