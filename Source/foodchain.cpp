// https://www.codechef.com/problems/FODCHAIN 
// 1062

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int e,k;
       cin>>e>>k; 
       
       int i,j = 0,count = 1,ans;
       ans = floor(e/k);
       while(ans >= 1)
       {
       		ans = ans/k;
       		count++;
       }
       cout<<count<<endl;
    }
}
