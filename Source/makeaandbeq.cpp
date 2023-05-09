#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		int a1,b1;
		cin>>a>>b;
		a1 = a*2;
		b1 = b*2;
		if (a1 == b)
		{
			cout<<"YES\n";
		}
		else if (b1 == a)
		{
			cout<<"YES\n";
		}
		else if (a == b)
		{
			cout<<"YES\n";
		}
		else if (a1 != b)
		{
			cout<<"NO\n";
		}
		else if (b1 != a)
		{
			cout<<"NO\n";
		}
		else 
		{
			cout<<"NO\n";
		}
	}
}
