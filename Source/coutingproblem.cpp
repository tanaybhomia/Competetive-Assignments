// https://www.codechef.com/problems/COUNTP
// 1065

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,count = 0;
		cin>>n;
		int arr[n];
		for (int i = 0;i<n;i++)
		{
			cin>>arr[i];
			if (arr[i] % 2 != 0)
			{
				count++;
			}
		}
		if (count >= 2 && count % 2 == 0)
		{
			cout<<"YES"<<endl;
		}
		else 
		{
			cout<<"NO"<<endl;
		}
	}
}