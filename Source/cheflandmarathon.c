#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int D; // D days to cover the distance for a category 
		int d; // maximum distance chef can travel
		int A,B,C;
		int point;
		
		cin>>D>>d>>A>>B>>C;
		int ans = D*d;
		if (ans >= 10 && ans >= 21 && ans>= 42)
		{
			cout<<C<<endl;
		}
		else if (ans>=10 && ans>=21)
		{
			cout<<B<<endl;	
		}
		else if (ans>=10)
		{
			cout<<A<<endl;
		}
		else 
		{
			cout<<0<<endl;
		}
	}
}
