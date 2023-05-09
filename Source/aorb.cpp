#include <iostream>
using namespace std;
int main()
{
	// declaration
	int t,i; 
	// loops and test cases 
	int a,b;
	// a = 500 points , reduced by 2
	// b = 1000 points , reduced by 4
	int x,y,x1,y1;
	// x minutes for solving problem a
	// y minutes for solving problem b
	int ans1,ans2,ans3,ans4,ansx,ansy;
	// for storing values and adding them
	
	// logic
	cin>>t;
	while(t)
	{
		cin>>x>>y;
		// for a to b
		y1 = y+x;
		ans1 = 500-x*2;
		ans2 = 1000-y1*4;
		ansx = ans1+ans2;
		
		// for b to a
		x1 = x+y;
		ans3 = 1000-x1*2;
		ans4 = 500-y*4;
		ansy = ans3+ans4;
		
		if (ansx>=ansy)
		{
			cout<<ansx<<"\n";
		}
		else if (ansy>ansx)
		{
			cout<<ansy<<"\n";
		}
		t--;
	}
}
