#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,level = 0,singdouble = 0;
		cin>>x;
		
		// level 0 is lower 
		// singdouble 0 is double
		
		if (x >= 1 && x <= 10)
		{
			level = 0;
			singdouble = 0;
		}
		else if ( x >= 11 && x <= 15)
		{
			level = 0;
			singdouble = 1;
		}
		else if (x >= 16 && x<= 25)
		{
			level = 1;
			singdouble = 0;
		}
		else if (x >= 26 && x <= 30)
		{
			level = 1;
			singdouble = 1;
		}
		
		if (singdouble == 0 && level == 0)
		{
			cout<<"Lower Double"<<endl;
		}
		else if (singdouble == 1 && level == 0)
		{
			cout<<"Lower Single"<<endl;
		}
		else if (singdouble == 0  && level == 1)
		{
			cout<<"Upper Double"<<endl;
		}
		else if (singdouble == 1 && level == 1)
		{
			cout<<"Upper Single"<<endl;
		}
	}
}
