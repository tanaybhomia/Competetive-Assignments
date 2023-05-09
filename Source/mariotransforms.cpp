#include <iostream>
using namespace std;
int main()
{
	int t,x,y,i;
	cin>>t;
	while(t--)
	{
		cin>>x;
		int a = 0, b = 1;
		for (i=0;i<x;i++)
		{
			if (b==2)
			{
				b = 0;
			}
			else 
			{
				b++;
			}
		}
		if (b==0)
		{
			cout<<"SMALL\n";
		}
		else if (b==1)
		{
			cout<<"NORMAL\n";
		}
		else if (b == 2)
		{
			cout<<"HUGE\n";
		}
	}
}
