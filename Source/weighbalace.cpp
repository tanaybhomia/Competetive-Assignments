// https://www.codechef.com/problems/WEIGHTBL
// 1045

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int w1,w2,x1,x2,M,increase;
		cin>>w1>>w2>>x1>>x2>>M;
		
		int min,max;
		min = M*x1;
		max = M*x2;
		increase = w2-w1;
		if (increase >= min && increase <= max)
		{
			cout<<1<<endl;
		}
		else 
		{
			cout<<0<<endl;
		}
	}
}
