#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,y,cost;
		string s;
		cin>>n>>x>>y;
		cin>>s;
		for (int i=0;i<=s.length();i++)
		{
			for (int j=i+1;j<=s.length();j++)
			{
				cout<<"Current Iteration :"<<s[i]<<" "<<s[j]<<endl;
				if (i==0 && j==1)
				{
					cost = cost+x;
					break;
				}
				else if (i==1 && j==0)
				{
					cost = cost+y;
					break;
				}
			}
		}
		cout<<cost<<endl;
	}
}