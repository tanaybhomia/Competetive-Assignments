#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the Array :";
    cin>>n;
    int arr[n];
    int i,j,temp,flag = 1;
    cout<<"Enter the array :";
    for (i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Number to Search :";
    cin>>temp;
    for (i=0;i<n;i++)
    {
        if (arr[i] == temp)
        {
            flag = 1;
            cout<<"The Array is present at position "<<i+1<<endl;
        }
        else 
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        cout<<"Array does not contain the Number "<<endl;
    }
}