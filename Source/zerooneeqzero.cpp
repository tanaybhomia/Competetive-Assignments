// https://www.codechef.com/problems/ZOOZ
// 1009

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,i;
		cin>>x;
		int zero,one;
		if (x == 3)
		{
			cout<<0<<1<<0<<endl;
		}
		else 
		{
			zero = x-2;
			one = 2;
			cout<<1;
			for(i=0;i<zero;i++)
			{
				cout<<0;
			}
			cout<<1<<endl;
		}
	}
}
