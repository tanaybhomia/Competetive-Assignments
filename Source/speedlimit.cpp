#include <iostream>
using namespace std;
int main()
{
	int t;
	int a,x;
	int b,y;
	cin>>t;
	while(t)
	{
		cin>>a>>x>>b>>y;
		float a1,x1,b1,y1;
		a1 = a;
		x1 = x;
		b1 = b;
		y1 = y;
		float alice = x1/a1;
		float bob = y1/b1;
		if (alice < bob)
		{
			cout<<"Alice\n";
		}
		else if (bob < alice)
		{
			cout<<"Bob\n";
		}
		else if (bob == alice)
		{
			cout<<"Equal\n";
		}
		t--;
	}
}

