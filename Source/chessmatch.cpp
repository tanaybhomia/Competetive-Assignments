// https://www.codechef.com/problems/BLITZ3_2
//998

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,a1,a2;
		cin>>x>>a1>>a2;
		int ans1,ans2;
		ans1 = 2*(180+x);
		ans2 = a1+a2;
		cout<<ans1-ans2<<endl;
	}
}
