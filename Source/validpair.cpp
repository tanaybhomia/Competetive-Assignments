#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if (a==b)
	{
		cout<<"YES\n";
	}
	else if (b==c)
	{
		cout<<"YES\n";
	}
	else if (a==c)
	{
		cout<<"YES\n";
	}
	else 
	{
		cout<<"NO\n";
	}
}
