#include <iostream>
using namespace std;
int main()
{
	int t,x,y,z,i,ans;
	ans = 0;
	cin>>t;
	while(t--)
	{
		cin>>x>>y;
		z=x+y;
		ans = 21-z;
		if (ans>=1 && ans<=10)
		{
			cout<<ans<<endl;
		}
		else 
		{
			cout<<-1<<endl;
		}
	}
}
