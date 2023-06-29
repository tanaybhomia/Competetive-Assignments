#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the Array size : ";
    int n;
    cin>>n;
    int i,j,k,temp;
    int arr[n];
    for (i = 0;i<n;i++)
    {
        cin>>arr[i];
    }

    // sorting the array
    for (i = 0;i<n-1;i++)
    {
        for (j=i+1;j<n;j++)
        {
            if (arr[j]<arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // outputing the array 
    for (i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}