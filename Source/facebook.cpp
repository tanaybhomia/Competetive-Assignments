#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		int likes[n],com[n],ans = 0,max = 0, max1 = 0,k = 0;
		int i,j;
		for (i = 0;i<n;i++)
		{
			cin>>likes[i];
		}
		for (i = 0;i<n;i++)
		{
			cin>>com[i];
		}
		
		for (i=0;i<n;i++)
		{
			if (likes[i] > max)
			{
				max = likes[i];
				max1 = com[i];
				k = i;				
			}
			else if (max == likes[i])
			{
				if (max1 < com[i])
				{
					max1 = com[i];
					k = i;
				}
			}
		}
		cout<<k+1<<endl;
	}
}
