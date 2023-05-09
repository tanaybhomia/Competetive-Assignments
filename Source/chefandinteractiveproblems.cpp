// https://www.codechef.com/problems/CHFINTRO
// 951

#include <iostream>
using namespace std;
int main()
{
	int t,n,r;
	cin>>t>>r;
	while(t--)
	{
		int x;
		cin>>x;
		if (x>=r)
		{
			cout<<"Good boi"<<endl;
		}
		else 
		{
			cout<<"Bad boi"<<endl;
		}
	}
}
