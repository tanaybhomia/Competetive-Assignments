// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/VOTERS
// 1114

#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int x,y,z,ans;
    cin>>x>>y>>z;
    ans = x+y+z;
    int arr[ans];
    for(int i = 0;i<ans;i++)
    {
        cin>>arr[i];
    }
    vector<int> voters;
    unordered_map<int, int> frequency;
    for(int i = 0;i<ans;i++)
    {
        frequency[arr[i]]++;
    }
    for(const auto& pair : frequency)
    {
        if(pair.second >= 2)
        {
            voters.push_back(pair.first);
        }
    }
    cout<<voters.size()<<endl;
    sort(voters.begin(), voters.end());
    for(int i = 0;i<voters.size();i++)
    {
        cout<<voters[i]<<endl;
    }
}