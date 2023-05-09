#include <iostream>
using namespace std;
int main()
{
	int t,x,rem,sum,i;
	cin>>t;
	sum = 0;
	for (i=0;i<t;i++)
	{
		cin>>x;
		do
		{
		
			rem = x%10;
			sum = sum + rem;
			
		}while (x>=9);
		cout<<sum<<"\n";
	}
}
