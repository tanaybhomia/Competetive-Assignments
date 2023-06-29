#include <iostream>
using namespace std;
int main()
{
    int arr[7];
    for (int i = 0;i<7;i++)
    {
        cin>>arr[i];
    }

    int i,j,temp;
    // traversing the array 
    for (i = 0;i<7;i++)
    {
        for (j=i+1;j<7;j++)
        {
            if (arr[j] < arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0;i<7;i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
}