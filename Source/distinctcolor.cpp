#include <iostream>
using namespace std;
int main()
{
    int t,n,i,largest;
    // n is the number of colors 
    cin>>t;
    while (t--)
    {
        cin>>n;
        int arr[n];
        for (i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        largest = arr[0];
        for (i=0;i<n;i++)
        {
            if (arr[i]>largest)
            {
                largest = arr[i];
            }
        }
        cout<<largest<<endl;
    }
}