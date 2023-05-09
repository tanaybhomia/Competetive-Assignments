#include <iostream>
using namespace std;
int main()
{
	int arr[3];
	int t;
	int i,j,k,l;
	int temp;
	cin>>t;
	for (i=0;i<t;i++)
	{
		for (j=0;j<3;j++)
		{
			cin>>arr[j];
		}
		for (k=0;k<3;k++)
		{
			for (l=k+1;l<3;l++)
			{
				if (arr[l]>arr[k])
				{
					temp = arr[l];
					arr[l]=arr[k];
					arr[k]=temp;
				}
			}
		}
		cout<<arr[1]<<"\n";
	}
}
