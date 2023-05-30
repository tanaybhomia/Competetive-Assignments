#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,total,i,count,j;
		cin>>n>>total;
		int order[n];
		for(i=0;i<n;i++)
		{
			cin>>order[i];
		}
		for(i=0;i<n;i++)
		{
			if(total < order[i])
			{
				cout<<'0';
			}
			else if(total >= order[i])
			{
				total = total-order[i];
				cout<<'1';
			}
		}
		cout<<"\n";
	}
}
