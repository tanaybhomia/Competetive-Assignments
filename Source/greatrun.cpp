// https://www.codechef.com/problems/PROC18A
// 1097

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,j=0;
		cin>>n>>k;
		int girls[n],speed[n-1];
		for (int i = 0;i<n;i++)
		{
			cin>>girls[i];
		}
		for (int i = 0;i<n-1;i++)
		{
			speed[j] = (girls[i] + girls[i+1]); 
			j++;
		}
		int highest = 0;
		for (int i = 0;i<n-1;i++)
		{
			if (speed[i] >= highest)
			{
				highest = speed[i];
			}
		}
		cout<<highest<<endl;
	}
}
