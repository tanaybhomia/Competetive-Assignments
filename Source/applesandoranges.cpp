// https://www.codechef.com/problems/APPLEORANGE
// 1040

#include <numeric>
#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int ans;
		
		// n apples 
		// m oranges 
		if (n<= 1 || m<=1)
		{
			cout<<1<<endl;
		}
		else 
		{
			ans = gcd(n,m);
			cout<<ans<<endl;
		}
		
	}
}
