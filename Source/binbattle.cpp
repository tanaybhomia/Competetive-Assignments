#include <iostream>
using namespace std;
int main()
{
	int n,a,b;
	int n1,n2,a1,b1;
	int i,t;
	cin>>t;
	while(t--)
	{
		n1=0;
		a1=0;
		b1=0;
		cin>>n>>a>>b;
		n1 = n/2;
		n2 = n1-1;
		a1 = a*n1;
		cout<<a1<<endl;
		b1 = b*n2;
		cout<<b1<<endl;
		// cout<<a1+b1<<endl;
	}
}
