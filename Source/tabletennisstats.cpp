// https://www.codechef.com/problems/TTENIS
// 1085

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
		int prot = 0,opp = 0;
		for (int i = 0;i<s.length();i++)
		{
			if (s[i] == '1')
			{
				prot++;
			}
			else if (s[i] == '0')
			{
				opp++;
			}
		}
		if (prot>=opp)
		{
			cout<<"WIN"<<endl;
		}
		else if (prot<=opp)
		{
			cout<<"LOSE"<<endl;
		}
	}
}
