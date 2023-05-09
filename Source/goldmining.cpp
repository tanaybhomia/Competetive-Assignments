#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,y,total;
		cin>>n>>x>>y;
		// x amount of gold in goldmine 
		// y each person atmost l
		total = y*(n+1);
		if (total >= x)
		{
			cout<<"Yes"<<endl;
		}
		else if (total < x)
		{
			cout<<"No"<<endl;
		}
	}
}
