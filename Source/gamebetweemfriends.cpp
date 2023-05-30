// https://www.codechef.com/problems/FRGAME
// 991
// FRGAME

// Saubhoya wants more coins to win
// Nitin can also have equal coins and still win

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if (a>=b)
		{
			 b = b+c;
			 if(b>a)
			 {
			 	a = c+d;
			 }
			 else 
			 {
			 	b = b+d;
			 }
		}
		else if(b>a)
		{
			a = a+c;
			if (a>=b)
			{
				b = b+d;
			}
			else 
			{
				a = a+d;
			}
		}
		if (a>=b)
		{
			cout<<"N"<<endl;
		}
		else if(b>a)
		{
			cout<<"S"<<endl;
		}
	}
}
