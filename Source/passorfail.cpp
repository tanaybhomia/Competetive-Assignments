#include <iostream>
using namespace std;
int main()
{
	int t,n,x,p;
	int i,j;
	int correct,wrong,ans;
	cin>>t;
	for (i=0;i<t;i++)
	{
		cin>>n>>x>>p;
		correct = x*3;
		wrong = (n-x)*-1;
		ans = correct + wrong;
		if (ans >= p)
		{
			cout<<"\nPASS";
		}
		else
		{
			cout<<"\nFAIL";
		}
	}
}
