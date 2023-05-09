#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float x1,x2,x3,v1,v2;
		cin>>x1>>x2>>x3>>v1>>v2;
		float chefd,kefad;
		chefd = (x3-x1)/v1;
		kefad = (x2-x3)/v2;
		if (chefd < kefad)
		{
			cout<<"Chef"<<endl;
		}
		else if (kefad < chefd)
		{
			cout<<"Kefa"<<endl;
		}
		else if (chefd == kefad)
		{
			cout<<"Draw"<<endl;
		}
	}
}
