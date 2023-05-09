#include <iostream>
using namespace std;
int main()
{
	int t,i,count; // number of test cases and loop 
	int size; // length of the array 
	cin>>t;
	int neg;
	int pos;
	int x,y;
	int x1,y1;
	int add = 0;
	while(t--)
	{
		cin>>size;
		int arr[size];
		neg = 0;
		pos = 0;
		for (i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		if (size%2 == 0)
		{
			for (i=0;i<size;i++)
			{
				if (arr[i] == 1)
				{
					pos = pos + 1;
				}
				else if (arr[i] == -1)
				{
					neg = neg + 1;
				}
			}
			if (neg < pos)
			{
				x = pos - neg;
				x1=x/2;
				cout<<x1<<endl;
			}
			else if (neg > pos)
			{
				y = neg - pos;
				y1=y/2;
				cout<<y1<<endl;
			} 
			else if (neg == pos)
			{
				cout<<0<<endl;
			}
			else if (pos == size)
			{
				cout<<size/2<<endl;
			}
			else if (neg == size)
			{
				cout<<size/2<<endl;
			} 
		}	
		else if (size%2!=0)
		{
			cout<<-1<<endl;
		}
	}
}
