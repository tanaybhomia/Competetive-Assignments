#include <iostream>
using namespace std;
int main()
{
	int t,m,s;
	// m = time required to reach park
	// s = time duration of the song 
	cin>>t;
	while(t--)
	{
		cin>>m>>s;
		if (s>m)
		{
			cout<<0<<endl;
		}
		else if (m == s)
		{
			cout<<1<<endl;
		}
		else if (m>s)
		{
			cout<<m/s<<endl;
		}
	}
}
