#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		int x,y;
		if (a<=b && a<=c)
		{
			cout<<b+c<<endl;
		}
		else if (b<=a && b<=c)
		{
			cout<<a+c<<endl;
		}
		else if (c<=a && c<=b)
		{
			cout<<a+b<<endl;
		}
	}
}
