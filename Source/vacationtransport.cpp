#include <iostream>
using namespace std;
int main()
{
	int t,x,y,z;
	int flight,train;
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>z;
		flight = x+y;
		train = z;
		if (train < flight)
		{
			cout<<"TRAIN\n";
		}
		else if (flight < train)
		{
			cout<<"PLANEBUS\n";
		}
		else if (flight == train)
		{
			cout<<"EQUAL\n";
		}
		flight = 0;
		train = 0;
	}
}
