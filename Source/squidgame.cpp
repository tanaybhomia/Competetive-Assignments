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
		int arr[n];
		int i,j;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		int smallest = 1;
		for (i=0;i<n;i++)
		{
			if (arr[i]<=smallest)
			{
				smallest = arr[i];
			}
		}
		int sum = 0;
		for (i=0;i<n;i++)
		{
			sum = sum+arr[i];
		}
		sum = sum - smallest;
		cout<<sum<<endl;
	}
}
