#include <iostream>
using namespace std;
void check(int k,int n)
{
	int max = k+n;
	if (max%2 == 0)
	{
		cout<<"Janmansh\n";
	}
	else 
	{
		cout<<"Jay\n";
	}
}
int main()
{
	int t,k,n;
	cin>>t;
	while (t--)
	{
		cin>>k>>n;
		check(k,n);
	}
}
