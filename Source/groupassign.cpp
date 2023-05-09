#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,r,first,last,i;
				
		cin>>n>>r;
		first = 1;
		last = 2*n;
		
		for (i=1;i<=n;i++)
		{
			if (first == r)
			{
				cout<<last<<endl;
			}
			else if (last == r)
			{
				cout<<first<<endl;
			}
			first +=1
			last -=1
		}
	}
}
