// https://www.codechef.com/problems/STRP
// 1065

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		
		char temp;
		int count  = 0, j = 0;
		if (n%2 == 0)
		{
			for (int i = 0;i<n;i+=2)
			{
				j = i+1;
				if (s[i] != s[j])
				{
					count+=2;
				}
				else if (s[i] == s[j])
				{
					count++;
				}
				j+=2;
			}	
			cout<<count<<endl;	
		}
		else if (n%2 != 0)
		{
			for (int i = 0;i<n;i+=2)
			{
				j = i+1;
				if (i == n-1)
				{
					break;
				}
				if (s[i] != s[j])
				{
					count+=2;
				}
				else if (s[i] == s[j])
				{
					count++;
				}
				j+=2;
			}	
			cout<<count<<endl;
		}
	}
}
