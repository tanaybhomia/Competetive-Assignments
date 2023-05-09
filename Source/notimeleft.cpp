// https://www.codechef.com/problems/NOTIME 

#include <iostream>
using namespace std;
int main()
{
    int n,h,x,i,j;
    int total;
    int largest;
    cin>>n>>h>>x;
    
    // n different time zones 
    // h hours req to solve the problem 
    // x hours left for the program 

    int timezone[n];
    for (i=0;i<n;i++)
    {
        cin>>timezone[i];
    }
    largest = 0;
    for (i=0;i<n;i++)
    {
        if (largest < timezone[i])
        {
            largest = timezone[i];
        }
    }
    total = largest + x;
    if (total>=h)
    {
        cout<<"YES"<<endl;
    }
    else if (total < h)
    {
        cout<<"NO"<<endl;
    }
}