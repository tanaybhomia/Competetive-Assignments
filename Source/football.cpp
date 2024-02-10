// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/MSNSADM1
// 1102


#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int goals[n],fouls[n],scores[n];
		for(int i=0;i<n;i++)
		{
			cin>>goals[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>fouls[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				scores[i] = (goals[i]*20) - (fouls[i]*10);
				if(scores[i] < 0)
				{
					scores[i] = 0;
				}
			}
		}

		int size = sizeof(scores) / sizeof(scores[0]);
		sort(scores, scores+size);
		
		cout<<scores[n-1]<<endl;
	}
}