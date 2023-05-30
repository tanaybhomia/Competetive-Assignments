// https://www.codechef.com/problems/PROGLANG
// 1001


#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,a1,b1,a2,b2;
		int pointa = 0,pointb = 0;
		cin>>a>>b>>a1>>a2>>b1>>b2;
		if((a==a1 || b==a1) && (a==a2 || b==a2))
		{
			cout<<1<<endl;
		}
		else if ((a==b1 || b==b1) && (a==b2 || b==b2))
		{
			cout<<2<<endl;
		}
		else 
		{
			cout<<0<<endl;
		}
	}
}
