// https://www.codechef.com/problems/CNDY
// 1018

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n , temp = 0 , count = 0 , ans = 0 , j,i;
		cin>>n;
		int x = n*2;
		int arr1[x];
		for (i=0;i<x;i++)
		{
			cin>>arr1[i];
		}
		if (n<2)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			for (i=0;i<x;i++)
			{
				count = 0;
				temp = arr1[i];
				for (j=i+1;j<x;j++)
				{
					if (temp == arr1[j])
					{
						count++;
						if (count>=3)
						{
							ans = 1;
							break;
						}
					}
				}
			}
			if (ans == 0)
			{
				cout<<"Yes"<<endl;
			}
			else if (ans == 1)
			{
				cout<<"No"<<endl;
			}	
		}
	}
}
