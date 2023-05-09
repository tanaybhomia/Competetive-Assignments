// https://www.codechef.com/problems/FIRSTANDLAST?tab=statement

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;

    int largest = 0;
    int slargest = 0;
    while(t--)
    {
        int n,m,i,j,arr[n],min,temp,total,first,second;
        cin>>n;
        m = n-2;

        // entering array
        for (i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        // sorting array 
        for (i = 0; i < n - 1; i++) 
        {
            min = i;
            for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min])
            min = j;
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }

        // finding last & second largest number
        first = arr[m];
        second = arr[n-1];

        total = first+second;
        cout<<total<<endl;
    }
}