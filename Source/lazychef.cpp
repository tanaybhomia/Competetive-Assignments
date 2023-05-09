#include <iostream>
using namespace std;
int main()
{
	int t,i;
	int x,m,d;
	// supposed to be completed in x;
	// complets in m*x;
	// cannot delay more than d;
	int upperbound,lowerbound;
	cin>>t;
	while(t)
	{
		cin>>x>>m>>d;
		lowerbound = x*m;
		upperbound = x+d;
		if (upperbound >= lowerbound)
		{
			cout<<lowerbound<<"\n";
		}
		else if (lowerbound > upperbound)
		{
			cout<<upperbound<<"\n";
		}
		t--;
	}
}
