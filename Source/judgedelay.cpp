#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sn,jn,delay,ans;
		ans = 0;
		cin>>n;
		while(n--)
		{
			cin>>sn>>jn;
			delay = jn-sn;
			if (delay > 5)
			{
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}
