#include <iostream>
using namespace std;	
int main()
{
	int n,m,x,i;
	// n is the number of bags ;
	// m is the least number to be maintained
	
	cin>>n>>m;

	int arr[n],arr1[n];
	// declaring array 
	
	for (i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	for (i=0;i<n;i++)
	{
		if (arr[i]>=m)
		{
			arr1[i]=0;
		}
		else 
		{
			arr1[i]=m-arr[i];
		}
	}
	for (i=0;i<n;i++)
	{
		cout<<arr1[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
