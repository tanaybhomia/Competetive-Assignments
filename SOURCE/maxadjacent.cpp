#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <cctype>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i = 0; i < n; i++)
		{
			cin>>arr[i];
		}
		sort(arr, arr+n);
		int ans = 0;
		for(int i =0;i<n;i++)
		{
			ans =arr[i]+arr[i+1];
		}
		cout<<ans<<endl;
	}
	return 0;
}