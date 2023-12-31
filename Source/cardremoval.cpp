// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/REMOVECARDS?tab=statement
// 1039

#include <iostream>
#include <unordered_map>
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
		int x[n];
		int y[n];
		unordered_map<int,int> frequency;
		for(int i = 0;i<n;i++)
		{
			cin>>x[i];
			frequency[x[i]]++;
			y[i] = frequency[x[i]];
		}
		int *maxElement = max_element(y, y + n);
		if(*maxElement >= 1)
		{
			cout<<n-*maxElement<<endl;
		}
		else if (*maxElement == n)
		{
			cout<<0<<endl;
		}
	}
}