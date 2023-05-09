// https://www.codechef.com/problems/VDATES

#include <iostream>
using namespace std;
int main()
{
	int d,l,r,t;
	cin>>t;
	while(t--)
	{
		cin>>d>>l>>r;
		if (d>=l && d<=r)
		{
			cout<<"Take second dose now"<<endl;
		}
		else if (d>r)
		{
			cout<<"Too Late"<<endl;
		}
		else if (d<l)
		{
			cout<<"Too Early"<<endl;
		}
	}
}
