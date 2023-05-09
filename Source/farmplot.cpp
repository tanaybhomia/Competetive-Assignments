// https://www.codechef.com/problems/RECTSQ

#include <algorithm>
#include <numeric>
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int l,w,total;
        cin>>l>>w;
        int gcd1 = __gcd(l,w);
        int plotl,plotw;
        plotl = l/gcd1;
        plotw = w/gcd1;
        total = plotl*plotw;
        cout<<total<<endl;
    }
}