// https://www.codechef.com/problems/UWCOI20A
// 1078

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
		int arr[n] , highest = 0;
		for (int i = 0;i<n;i++)
		{
			cin>>arr[i];
			if (arr[i] > highest)
			{
				highest = arr[i];
			}
		}
		cout<<highest<<endl;
	}
}