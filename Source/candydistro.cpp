#include <iostream>
using namespace std;
int main()
{
	int m,n,t,x;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		if (n%m == 0)
		{
			x = n/m;
			if (x%2 == 0)
			{
				cout<<"Yes\n";
			}	
			else 
			{
				cout<<"No\n";
			}
		}
		else 
		{
			cout<<"No\n";
		}
	}
}
