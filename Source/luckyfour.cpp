// https://www.codechef.com/problems/LUCKYFR
// 998

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int length = s.length();
		int i,count = 0;
		for(i = 0;i<length;i++)
		{
			if(s[i] == '4')
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
}
