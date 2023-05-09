#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,z;
		cin>>x>>y>>z;
		int b,s,p;
		b = x*y;
		s = x*z;
		cout<<s-b<<endl;
	}
}
