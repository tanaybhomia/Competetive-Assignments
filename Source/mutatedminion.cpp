#include <iostream>
using namespace std;
int main()
{
	int t,j,n,i,count,x;
	cin>>t;
	while(t)
	{
		cin>>n>>x;
		count = 0;
		int arr[n];
		for (i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for (i=0;i<n;i++)
		{
			arr[i] = arr[i]+x;
			if (arr[i]%7==0)
			{
				count = count+1;
			}
		}
		cout<<count<<endl;
		t--;
	}
}
