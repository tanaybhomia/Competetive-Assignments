// https://www.codechef.com/problems/TABLET
// 1037

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p;
		cin>>n>>p;
		
		int i,j = 0 ,count = 0;
		int hi,wi,pi;
		int area[n];
		for (i=0;i<n;i++)
		{
			cin>>hi>>wi>>pi;
			if (pi<=p)
			{
				area[j] = wi*hi;
				count++;
			}
			else 
			{
				continue;
			}
			j++;
		}
		area[count-1];
		if (count == 0)
		{
			cout<<"no tablet"<<endl;
		}
		else 
		{
			int greatest = 0;
			for (i=0;i<=count-1;i++)
			{		
				if (area[i] >= greatest)
				{
					greatest = area[i];
				}
			}
			cout<<greatest<<endl;	
		}
	}
}