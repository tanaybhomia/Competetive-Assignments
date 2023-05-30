// https://www.codechef.com/problems/EASYPERM
// 1057

#include <iostream>
#include <numeric>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int x1 = n+1; 
        int x2 = n+1;
        int ans = std::lcm(x1,x2);
       	for (int i=n;i>=1;i--)
       	{
       		cout<<i<<" ";
       	}
       	cout<<endl;
    }
}
