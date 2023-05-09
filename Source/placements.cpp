#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char priorities[3];
		char offers[2];
		int priority1,priority2;
		char first,second;
		int i;
		for (i=0;i<3;i++)
		{
			cin>>priorities[i];
		}
		for (i=0;i<2;i++)
		{
			cin>>offers[i];
		}
		first = offers[0];
		second = offers[1];
		
		for (i=0;i<3;i++)
		{
			if (first == priorities[i])
			{
				priority1 = i;
			}
			else if (second == priorities[i])
			{
				priority2 = i;
			}
		}
		
		if (priority1 < priority2)
		{
			cout<<first<<endl;
		}
		else if (priority2 < priority1)
		{
			cout<<second<<endl;
		}
	}
}
