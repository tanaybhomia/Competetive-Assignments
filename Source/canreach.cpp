// https://www.codechef.com/problems/CAN_REACH
// 990

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,k;
		cin>>x>>y>>k;
		if(x%k == 0 && y%k == 0)
		{
			cout<<"YEs"<<endl;
		}
		else 
		{
			cout<<"No"<<endl;
		}
	}
}
