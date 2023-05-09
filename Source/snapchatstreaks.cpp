#include <iostream>
using namespace std;
int main()
{
	int t;
	int n,i,j;
	int streak = 0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n],b[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
		}
		for (i=0;i<n;i++)
		{
			if (a[i]!=0 && b[i]!=0)
			{
				streak = streak+1;
			}
			else 
			{
				
			}
		}
		cout<<streak<<endl;
		streak = 0;
	}
}
