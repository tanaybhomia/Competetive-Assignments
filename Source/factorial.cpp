#include <iostream>
#include <cmath>
using namespace std;
int factorial(int n)
{
	int fact = 1;
	int i;
	if (n==0)
		return 0;
	else 
	{
		for (i=1;i<n+1;i++)
		{	
			fact = fact*i;
		}
		return fact;	
	}
}
int main()
{
	int t,n,x;
	cin>>t;
	while(t)
	{
		cin>>n;
		x=factorial(n);
		cout<<x<<"\n";
		t--;
	}
}
