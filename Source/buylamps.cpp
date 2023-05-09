#include <iostream>
using namespace std;
int main()
{
	int t;
	int x,y;
	int n,k;
	int cred,remlamp,cblue;
	
	cin>>t;
	while(t)
	{
		cin>>n>>k>>x>>y;
		if (n==k)
		{
			// has to buy all the red lamps 
			cout<<k*x<<endl;
		}
		else if (x>y)
		{
			// buys minimum red lamps and then buys blue because of minimum amount 
			cred = k*x;
			remlamp = n-k;
			cblue = remlamp*y;
			cout<<cred+cblue<<endl;
		}
		else if (x<y)
		{
			// buys all the red lamps because minimum amount 
			cout<<n*x<<endl;
		}
		t--;
	}
}
