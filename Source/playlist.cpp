// https://www.codechef.com/problems/JOHNY
// 1093

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,song,x,temp,location;
		cin>>n;
		int playlist[n];
		for (int i = 0;i<n;i++)
		{
			cin>>playlist[i];
		}
		cin>>song;
		for (int i = 0;i<n;i++)
		{
			if (i == song)
			{
				temp = playlist[i];
			}
		}
		
		// sorting 
		sort(playlist,playlist+n);
		if (song == 1)
		{
			for (int i = 0;i<n;i++)
			{
				if (playlist[i] == temp)
				{
					x = i;
					break;
				}
			}	
		}
		else if (song%2 == 0)
		{
			for (int i = 0;i<n;i++)
			{
				if (playlist[i] == temp)
				{
					x = i;
					break;
				}
			}	
		}
		else if (song%2 != 0)
		{
			for (int i = 0;i<n;i++)
			{
				if (playlist[i] == temp)
				{
					x = i+1;
					break;
				}
			}	
		}
		cout<<x<<endl;
	}
}
