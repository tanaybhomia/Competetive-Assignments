#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,ans;
		cin>>x>>y;
		int i,j,count = 0;
		for (i=0;i<x;i++)
		{
			for (j=0;j<x;j++)
			{
				ans = i+j;
				if ( ans%2 != 0)
				{
					count++;
				}
			}
		}
		if (count >= y)
		{
			cout<<"YES"<<endl;
		}
		else if (count < y)
		{
			cout<<"NO"<<endl;
		}
		count = 0;
	}
}
