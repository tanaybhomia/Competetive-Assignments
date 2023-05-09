#include <iostream>
using namespace std;
int main()
{
	int t;
	int x,i,ans;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>x;
		while(x)
		{
			ans = ans*10+x%10;
			x/=10; 
		}
		cout<<ans<<"\n";
		ans = 0;
	}
}
