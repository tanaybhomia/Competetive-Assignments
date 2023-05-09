#include <iostream>
using namespace std;
int main()
{
	int t,x,y,z;
	int breaks,gametime,i,j,breaktime,ans;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>z;	
		if (x<=3)
		{
			cout<<y*x<<endl;
		}
		else if (x>3)
		{
			if (x%3 != 0)
			{
				breaks = x/3;
				breaktime = breaks*z;
				gametime = x*y;
				ans = breaktime + gametime;
				cout<<ans<<endl;	
			}
			else 
			{
				breaks = x/3;
				breaktime = breaks*z;
				gametime = x*y;
				ans = breaktime + gametime - z;
				cout<<ans<<endl;
			}
		}
	}
}
