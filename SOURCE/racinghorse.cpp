// https://www.codechef.com/practice/course/sorting-cpp/CPPSOR01A/problems/HORSES
// 1231

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
		for(int i = 0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		int secarr[n-1];
		for(int i =0;i<n;i++)
		{
			secarr[i] = arr[i+1]-arr[i];
		}
		sort(secarr,secarr+(n-1));
		cout<<secarr[0]<<endl;
	}
	return 0;
}