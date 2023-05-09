#include <iostream>
using namespace std;
int main()
{
	int t,n,count,x,i;
	count = 0;
	cin>>t;
	while(t)
	{
		cin>>n;
		int problems[n];
		for (i=0;i<n;i++)
		{	
			cin>>problems[i];
		}
		for (i=0;i<n;i++)
		{
			if (problems[i]>=1000)
			{
				count = count+1;
			}
		}
		cout<<count;
		t--;
		count=0;
	}
}
