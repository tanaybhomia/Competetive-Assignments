// https://www.codechef.com/problems/MISSP
// 1012

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		cin>>n;
		int x;
		int ans = 0;
		for (i=0;i<n;i++)
		{
			cin>>x;
			ans = ans^x;
		}
		cout<<ans<<endl;
	}
}
