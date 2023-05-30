// https://www.codechef.com/problems/TRICOIN
// 1075

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int row = 0,ans = 0;
		for (int i = 1;i<=n;i++)
		{
			if (n <= row)
			{
				break;
				ans = i;
			}
			else 
			{
				n = n - i;
				row = row + 1;
				ans = i;
			}
		}
		cout<<ans<<endl;
	}
}
