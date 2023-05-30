#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a1,a2,b1,b2,c1,c2;
		cin>>a1>>a2;
		cin>>b1>>b2;
		cin>>c1>>c2;
		int a,b,c;
		a = a1+a2;
		b = b1+b2;
		c = c1+c2;
		if(a>=b && a>=c)
		{
			cout<<a<<endl;
		}
		else if (b>=a && b>=c)
		{
			cout<<b<<endl;
		}
		else if(c>=a && c>=b)
		{
			cout<<c<<endl;
		}
	}
}
