// https://www.codechef.com/problems/DIET?tab=statement
// 1025 
// Code worked automatically and was not working earlier IDK


#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i,j,finaly = 0;
		cin>>n>>k;
		int days[n];
		for (i=0;i<n;i++)
		{
			cin>>days[i];	
		}
			
		int first,rem = 0;
		first = days[0];
		if (first > k)
		{
			for (i=0;i<n-1;i++)
			{
				rem = days[i] - k;
				days[i+1] += rem;
				if (days[i+1] < k)
				{
					finaly = i+1;
					break;
				}
			}
			if (finaly == 0)
			{
				cout<<"Yes"<<endl;
			}
			else if (finaly != 0)
			{
				cout<<"No"<<" "<<finaly+1<<endl;
			}
		}
		else if (first < k)
		{
			cout<<"No"<<" "<<1<<endl;
		}
	}
}
