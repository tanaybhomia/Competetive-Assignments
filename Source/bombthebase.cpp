// https://www.codechef.com/problems/BOMBTHEBASE
// 982

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		// n is number of houses;
		// x is strength of the bomb;
		
		cin>>n>>x;
		int ans,s = 0;
		int houses[n];
		int i,j = 0,k,count;
		for(i=0;i<n;i++)
		{
			cin>>houses[i];
		}
		int v = n-1;
		for(i=v;i>=0;i--)
		{
			if(houses[i] < x)
			{
				ans = i+1;
				s = 1;
				break;
			}
			else
			{
				s = 0;
			}
		}
		if(s == 1)
		{
			cout<<ans<<endl;
		}
		else if (s == 0)
		{
			cout<<0<<endl;
		}
	}
}
