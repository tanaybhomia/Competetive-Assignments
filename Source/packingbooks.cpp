#include <iostream>
using namespace std;
int main()
{
	int t,x,y,z;
	// x number of shelves 
	// y number of books in each shelf
	// z max number of books 
	cin>>t;
	while(t--)
	{
		cin>>x>>y>>z;
		if (z>=10)
		{
			cout<<x*3<<endl;
		}
		else if (y==z)
		{
			cout<<x<<endl;
		}
		else 
		{
			cout<<x*2<<endl;
		}
	}
}
