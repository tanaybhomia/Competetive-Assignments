// https://www.codechef.com/problems/COVID_19
// 1077

#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int row , seats;
		cin>>row>>seats;
		
		int count = 0;
		if (row == 1)
		{
			for (int i = 1;i<=seats;i=i+2)
			{
				count++;
			}
			cout<<count<<endl;
		}
		else if (row%2 == 0)
		{
			row = row/2;
			for (int i = 1;i<=seats;i=i+2)
			{
				count++;
			}
			cout<<count*row<<endl;		
		}
		else if (row%2 != 0)
		{
			int sub = ceil(row/2);
			row = row-sub;
			for (int i = 1;i<=seats;i=i+2)
			{
				count++;
			}
			cout<<count*row<<endl;
		}
	}
}
