// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/LAPTOPREC?tab=statement
// 1104

#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		unordered_map<int, int> frequency;
		int n;
		cin>>n;
		int arr[n];
		for(int i =0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i = 0;i<n;i++)
		{
			frequency[arr[i]]++;
		}
    	
		// Find the highest frequency
		int maxFrequency = 0;
		for (const auto& pair : frequency) 
		{
			maxFrequency = max(maxFrequency, pair.second);
		}

		// Iterate over the map
		// store the numbers with highest freq in a set 
		// stores single data only once
		unordered_set<int> numbersWithMaxFrequency;
   		for (const auto& pair : frequency) 
		{
        	if (pair.second == maxFrequency) 
			{
            	numbersWithMaxFrequency.insert(pair.first);
        	}
    	}

		int mapsize = numbersWithMaxFrequency.size();
		if (mapsize>1)
		{
			cout<<"CONFUSED"<<endl;
		}
		else 
		{
			cout<<*numbersWithMaxFrequency.begin()<<endl;
		}
	}
	return 0;
}


// Things learned:
/*
1. unordered_map<int, int> frequency; -> Creates a map with key as int and value as int
2. Map which stores unique value

*/