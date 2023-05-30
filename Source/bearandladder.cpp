#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		int ans;
		cin>>x>>y;
		if(x%2 == 0)
		{
			if (x>y)
			{
				ans = x-y;
				if(ans<=2)
				{
					cout<<"YES"<<endl;
				}
				else 
				{
					cout<<"No"<<endl;
				}
			}
			else if (y>x)
			{
				ans = y-x;
				if(ans<=2)
				{
					cout<<"Yes"<<endl;
				}
				else
				{
					cout<<"No"<<endl;
				}
			}
		}
		else if (x%2!=0)
		{
			if (x>y)
			{
				ans = x-y;
				if(ans<=2)
				{
					cout<<"YES"<<endl;
				}
				else 
				{
					cout<<"No"<<endl;
				}
			}
			else if (y>x)
			{
				ans = y-x;
				if(ans<=2)
				{
					cout<<"Yes"<<endl;
				}
				else
				{
					cout<<"No"<<endl;
				}
			}	
		}
	}
}
