#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int g,c;
		int ans,ans1,ans2;
		cin>>g>>c;
		ans1 = c*c;
		ans2 = 2*g;
		ans = ans1/ans2;
		cout<<ans<<endl;
	}
}
