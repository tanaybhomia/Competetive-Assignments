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
		int x;
		cin>>x;
		string s;
		cin>>s;
		
		int indian = 0,notsure = 0,foreigner = 0;
		for (int i = 0;i<x;i++)
		{
			if (s[i] == 'I')
			{
				indian++;
			}
			else if (s[i] == 'N')
			{
				notsure++;
			}
			else if (s[i] == 'Y')
			{
				foreigner++;
			}
		}
		if (foreigner != 0 && indian == 0)
		{
			cout<<"NOT INDIAN"<<endl;
		}
		else if (indian != 0)
		{
			cout<<"INDIAN"<<endl;
		}
		else if (foreigner == 0 && indian == 0)
		{
			cout<<"NOT SURE"<<endl;
		}
	}
}
