#include <iostream>
using namespace std;
int main()
{
	int t,a,b;
	cin>>t;
	while (t--)
	{
		cin>>a>>b;
		if (b%a == 0)
		{
			cout<<"YES"<<endl;
		}
		else if (b%a != 0)
		{
			cout<<"NO"<<endl;
		}
	}
}
