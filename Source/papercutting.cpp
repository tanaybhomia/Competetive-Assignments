#include <iostream>
using namespace std;
int main()
{
	int t,i;
	int n;
	// side length of the paper;
	int k;
	// k*k is the size of the paper that the chef wants to cut
	cin>>t;
	while (t)
	{
		cin>>n>>k;
		if (n==k)
		{
			cout<<1<<"\n";
		}
		else if (k==1)
		{
			cout<<n*n<<"\n";
		}
		else
		{
			i = n/k;
			cout<<i*i<<"\n";
		}
		t--;
	}
}
