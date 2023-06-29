#include <iostream>
#include <vector>
#include <unordered_map>

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
		for (int i = 0;i<n;i++)
		{
			cin>>arr[i];
		}	
		unordered_map<int,int> freqm;
		for (int i = 0;i<n;i++)
		{
			freqm[arr[i]]++;
		}
		int maxfrequency  = 0;
		for (const auto&pair : freqm)
		{
			maxfrequency = max(maxfrequency,pair.second);
		}
		int result = 0;
		result = n-maxfrequency;
		cout<<result<<endl;
	}
}