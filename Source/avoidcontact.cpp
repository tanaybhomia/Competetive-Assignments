#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,infec,total;
		// x people to accomadate;
		// y infected;
		
		cin>>x>>y;
		
		int normal;
		normal = x-y;
		
		if (y == 0)
		{
			cout<<x<<endl;
		}
		else if (y == 1)
		{
			cout<<normal+2<<endl;
		}
		else if (x == y)
		{
			cout<<(y*2)-1<<endl;
		}
		else 
		{
			infec = (y*2);
			total = infec + normal;
			cout<<total<<endl;
		}
	}
	// 1 test case failed 
}
