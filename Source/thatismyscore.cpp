#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector <int> arr1(n);
		vector <int> arr2(n);
		for (int i = 0;i<n;i++)
		{
			cin>>arr1[i]>>arr2[i];
		}
		vector<int>score (12);
		for (int i = 0;i<n;i++)
		{
			score[arr1[i]] = max(score[arr1[i]],arr2[i]);
		}
		int ans = 0;
		for (int i = 1;i<=8;i++)
		{
			ans+=score[i];
		}
		cout<<ans<<endl;
	}
}
