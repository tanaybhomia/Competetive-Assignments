#include <iostream>
using namespace std;
int main()
{
	// decleration
	int t,i;
	// loops and counters
	int x,y;
	// x choclates 
	// y rupees 
	int ans;
	// for storing ans
	
	// logic 
	cin>>t;
	while(t)
	{
		cin>>x>>y;
		ans = x/y;
		cout<<ans<<"\n";
		t--;
	}
}
