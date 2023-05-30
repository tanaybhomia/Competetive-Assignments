#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,i,temp = 0;
		cin>>n>>k;
		if(n<k)
		{
			cout<<"No"<<endl;
		}
		else if (k==1 && n==1)
		{
			cout<<"Yes"<<endl;
		}
		else 
		{
			for(i=1;i<=k;i++)
			{
				temp += i;
			}
			if(temp<=n)
			{
				cout<<"Yes"<<endl;
			}
			else 
			{
				cout<<"No"<<endl;
			}
		}
	}
}
