#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		int a[n],b[n];
		int l,r,sum = 0;
		for (int i = 0;i<n;i++)
		{
			cin>>a[i];
		}
		for (int i = 0;i<n;i++)
		{
			cin>>b[i];
		}
		for (int i = 0;i<q;i++)
		{
			cin>>l>>r;
			for (int j = l-1;j<r;j++)
			{
				sum = sum+(a[j] * b[j]);
			}
		}
		cout<<sum<<endl;
	}
}
