#include <iostream>
using namespace std;
int main()
{
	int t;
	int q,p,d,discount,finalamount,dp,dq;
	cin>>t;
	while(t--)
	{
		cin>>q>>p;
		// q= quantity
		// p = prize 
		if (q <= 1000)
		{
			cout<<q*p<<endl;
		}
		else if (q > 1000)
		{
			q = 1000 - q;
			dp = p/10;
			finalamount = q*dp;
			cout<<finalamount<<endl;
		}
	}
}
