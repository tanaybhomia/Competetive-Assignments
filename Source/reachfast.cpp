#include <iostream>
using namespace std;
int main()
{
	int t; // test cases 
	int x,y,k;// x chef coordinate,y reaching point,k max increase in coordinate 
	int i,j,l; // loops
	int count = 0; // loop counter if needed
	int diff; // difference between 2 coordinates
	int travel; 
	cin>>t;
	for (i=0;i<t;i++)
	{
		cin>>x>>y>>k;
		if (x>y)
		{
			diff = x-y;
			if (diff < k)
			{
				cout<<"\n"<<1;
			}
			else if (diff > k)
			{
				while (travel < diff)
				{
					travel = travel+k;
					count++;
				}
				cout<<"\n"<<count;
			}
			count = 0;
			diff = 0;
			travel = 0;
		}
		if (y>x)
		{
			diff = y-x;
			if (diff < k)
			{
				cout<<1<<"\n";
			}
			else if (diff > k)
			{
				while (travel < diff)
				{
					travel = travel+k;
					count++;
				}
				cout<<"\n"<<count;
			}
			count = 0;
			diff = 0;
			travel = 0;
		}
		else if (x==y)
		{
			cout<<"\n"<<0;
		}
	}
}
