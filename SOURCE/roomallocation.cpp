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
		int n;cin>>n;
		// Number of colleges coming for the fest

		int colleges[n];
		int rooms = 0;
		int j=0;
		for(int i = 0;i < n; i++)
		{
			cin>>colleges[i];
		}
		for(int i = 0;i<n;i++)
		{
			if(colleges[i]%2 == 0)
			{
				rooms+=colleges[i]/2;
			}
			else if(colleges[i]%2 !=0)
			{
				rooms+=(colleges[i]+1)/2;
			}
		}
		cout<<rooms<<endl;
	}
	return 0;
}