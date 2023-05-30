#include <iostream>
using namespace std;
int main()
{
	int x;
	cin>>x;
	if(x<51)
	{
		cout<<100<<endl;
	}
	else if (x>50 && x<=100)
	{
		cout<<50<<endl;
	}
	else if (x>100)
	{
		cout<<0<<endl;
	}
}
