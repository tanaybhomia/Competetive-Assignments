// https://www.codechef.com/problems/LOCKDRAW
// 982

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
		int x1,x2,x3;
		x1 = b+c;
		x2 = a+c;
		x3 = a+b;
		if (x1 == a)
		{
			cout<<"YES"<<endl;
		}
		else if(x2 == b)
		{
			cout<<"YES"<<endl;
		}
		else if (x3 == c)
		{
			cout<<"YES"<<endl;
		}
		else 
		{
			cout<<"NO"<<endl;
		}
	}
}
