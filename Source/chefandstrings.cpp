// https://www.codechef.com/problems/CHEFSTR1
// 1094

#include <iostream>
#include <cstdlib>
#define ll long long
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll int n,j = 0;
		cin>>n;
		ll int strings[n],diff[n-1],sum = 0;
		for (ll int i = 0;i<n;i++)
		{
			cin>>strings[i];
		}
		for (ll int i = 0;i<n-1;i++)
		{
			diff[i] = abs(strings[i] - strings[i+1])-1;
		}
		for (ll int i = 0;i<n-1;i++)
		{
			sum = sum + diff[i];
		}
		cout<<sum<<endl;
	}
}
