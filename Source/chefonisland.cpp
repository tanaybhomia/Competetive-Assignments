#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float x,y,xr,yr,d;
		// x units of food 
		// y units of water 
		// xr of food per day 
		// yr of water per day
		// d days to build a boat 
		
		
		cin>>x>>y>>xr>>yr>>d;
		float water,food;
		food = x/xr;
		water = y/yr;
		if (min(food,water) >= d)
		{
			cout<<"YES"<<endl;
		}
		else if (min(food,water) <= d)
		{
			cout<<"NO"<<endl;z
		}
	}
}
