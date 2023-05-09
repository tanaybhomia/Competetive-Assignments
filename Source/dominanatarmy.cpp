#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	int t,i;
	cin>>t;
	while (t)
	{
		cin>>a>>b>>c;
		if (a>b+c)
		{
			cout<<"YES\n";
		}
		else if (c>a+b)
		{
			cout<<"YES\n";
		}
		else if (b>c+a)
		{
			cout<<"YES\n";
		}
		else 
		{
			cout<<"NO\n";
		}
		t--;
	}
}
