// https://www.codechef.com/problems/WATESTCASES
// 976
// best code that i have completed 

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j = 0,count = 0,smallest = 100000;
		cin>>n;
		int testc[n];
		for(i=0;i<n;i++)
		{
			cin>>testc[i];
		}
		string result;
		cin>>result;
		for(i=0;i<result.length();i++)
		{
			if(result[i]=='1')
			{
				count++;
			}
		}
		int failed[n-count];
		for(i=0;i<result.length();i++)
		{
			if (result[i]=='0')
			{
				failed[j] = testc[i];
				j++;
			}
		}
		for(i=0;i<n-count;i++)
		{
			if(failed[i]<=smallest)
			{
				smallest=failed[i];
			}
		}
		cout<<smallest<<endl;
		count = 0;
	}
}
