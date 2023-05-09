#include <iostream>
using namespace std;
int main()
{
	int t,n,cars,bikes;
	cin>>t;
	while(t)
	{
		cin>>n;
		if (n<4)
		{
			cout<<"YES\n";
		}
		else 
		{
			if (n%4 == 0)
			{
				cout<<"NO\n";
			}
			else
			{
				bikes = n%4;
				if (bikes>1 && bikes<4)
				{
					cout<<"YES\n";
				}
			}
		}
		t--;
	}
}
