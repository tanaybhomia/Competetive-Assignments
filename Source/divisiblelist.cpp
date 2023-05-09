#include <iostream>
using namespace std;
int main()
{
    int t,k;
    int i;
    int count;
    cin>>t>>k;
    int arr[t];
    for (i=0;i<t;i++)
    {
        cin>>arr[i];
    }
    for (i=0;i<t;i++)
    {
        if ((arr[i]%k)==0)
        {
            count++;
        }
    }
    cout<<count;
    return 0;
}
