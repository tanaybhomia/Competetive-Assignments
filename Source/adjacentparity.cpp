#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int sum = 0;
		int n;
		cin>>n;
		int b[n];
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		for(int i = 0;i<n;i++)
		{
			sum = sum+b[i];
		}
		if (sum%2 == 0)
		{
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}