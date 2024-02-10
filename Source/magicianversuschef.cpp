// https://www.codechef.com/problems/MAGICHF
// 1088

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,s;
		cin>>n>>x>>s;
		
		int a,b,ans = x;
		for (int i = 1;i<=s;i++)
		{
			cin>>a>>b;
			if (a == ans)
			{
				ans = b;
			}
			else if (b == ans)
			{
				ans = a;
			}
		}
		cout<<ans<<endl;
	}
}
