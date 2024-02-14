// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/KOL15A
// 1125

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
		int count = 0;
		string input;
		cin>>input;
		vector<int> arr;
		for(int i =0;i<input.length();i++)
		{
			if(isdigit(input[i]))
			{
				arr.push_back(input[i]-'0');
			}
		}
		int add = 0;
		for(int i = 0;i<arr.size();i++)
		{
			add = add+arr[i];
		}
		cout<<add<<endl;
	}
	return 0;
}