#include <iostream>
using namespace std;
int main()
{
	int t;
	int z,y;
	// had z rupees 
	// spent y rupees
	
	int a,b,c;
	// three types of water rides 
	
	cin>>t;
	while(t--)
	{
		cin>>z>>y>>a>>b>>c;
		int rem = z-y;
		int once = a+b+c;
		if (rem >= once)
		{
			cout<<"YES"<<endl;
		}
		else if (rem < once)
		{
			cout<<"NO"<<endl;
		}
		else 
		{
			cout<<"NO"<<endl;
		}
	}
}
