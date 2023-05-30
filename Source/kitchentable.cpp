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
		int a[n],b[n];
		int i,j,count = 0;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
		}
		for(i=0;i<n;i++)
		{
			if(b[i]<=a[i])
			{
				count++;
			}
			else
			{
				
			}
		}
		cout<<count-1<<endl;
	}
}
