#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n;
		int add[n],j=0,score = 0;
		for (int i = 0;i<n;i++)
		{
			int a,b,highest = 0;
			cin>>a>>b;
			if (a<9)
			{
				add[j] = b;
				score++;
			}
			else if (a>=9)
			{
				add[j] = 0;
			}
			j++;
		}
		
	}
}
