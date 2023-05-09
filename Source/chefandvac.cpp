#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,z,vac;
		cin>>x>>y>>z;
		vac = x+y;
		if (z >= vac)
		{
			cout<<"Yes"<<endl;
		}
		else if (z < vac)
		{
			cout<<"No"<<endl;
		}
	}
}
