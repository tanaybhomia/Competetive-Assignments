#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while (t--)
	{
		int n,a;
		cin>>n>>a;
		// total number of people in the city
		// number of people affected by the virus 

		int unif = n-a;
		if(a<=unif)
		{
			cout<<a<<endl;
		}
		else 
		{
			cout<<unif<<endl;
		}
	}
}