#include <iostream>
using namespace std;
int main()
{
	int t,arr[3],i,smallest;
	int temp;
	int j,x;
	cin>>t;
	while(t--)
	{
		for (i=0;i<3;i++)
		{
			cin>>arr[i];
		}	
		smallest = arr[0];
		for (i=0;i<3;i++)
		{
			if (arr[i]<smallest)
			{
				smallest = arr[i];
			}
		}
		x = arr[0]+arr[1]+arr[2];
		cout<<x-smallest<<endl;
	}
}
