#include <iostream>
using namespace std;
int main()
{
	int t;
	int x1,x2,y1,y2,z1,z2;
	// x1 to solve , x2 has soled 
	int ans = 0;
	
	cin>>t;
	while(t--)
	{
		cin>>x1>>x2>>y1>>y2>>z1>>z2;
		if (x1<=x2 && y1<=y2 && z2<=z1)
		{
			cout<<"YES"<<endl;
		}
		else 
		{
			cout<<"NO"<<endl;
		}
	}
	
}
