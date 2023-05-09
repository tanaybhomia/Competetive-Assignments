// https://www.codechef.com/problems/JMARKET?tab=statement

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int x,i,total;
        int minf,maxf;
        int fruits[3];
        cin>>x;
        for (i=0;i<3;i++)
        {
            cin>>fruits[i];
        }
        sort(fruits,fruits+3);
        minf = fruits[0]*(x-1);
        maxf = fruits[1];
        total = maxf + minf;
        cout<<total<<endl;
        total = 0;
    }
}