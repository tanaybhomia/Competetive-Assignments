#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t; // test case 
    int n,x; // n: list items | x: 2^x salary
    int ar[n];
    int sal,y;
    int i;
    int j;
    cin>>t;
    y = 2;
    for (i=0;i<t;i++)
    {
        cin>>n;
        cin>>x;
        sal = pow(y,x); 
        for (j=0;j<n;j++)
        {
            sal = sal/2;
        }

        cout<<"\n"<<sal;
    }
}