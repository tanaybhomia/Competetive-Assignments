#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		int d,e;

		// the checked in bag should not exceed D 
		// the bag carried should not be exceeding E

		cin>>a>>b>>c>>d>>e;
		int ab,ac,ad,bc;
		ab = a+b;
		ac = a+c;
		ad = a+d;
		bc = b+c;

		if (ab<=d && c<=e)
		{
			cout<<"YES"<<endl;
		}
		else if (ac<=d && b<=e)
		{
			cout<<"YES"<<endl;
		}
		else if (ad<=d && c<=e)
		{
			cout<<"YES"<<endl;
		}
		else if (bc<=d && a<=e)
		{
			cout<<"YES"<<endl;
		}
		else 
		{
			cout<<"NO"<<endl;
		}
	}
}