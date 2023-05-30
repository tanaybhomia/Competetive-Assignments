#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		
		int i,count = 0,k=0,j = 0;
		int arr[20];
		for (i=l;i<=r;i++)
		{
			for (j=i+1;j<=r;j++)
			{
				if ((i+j) == (i^j))
				{
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
}
