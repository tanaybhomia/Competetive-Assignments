#include <iostream>
using namespace std;
int main()
{
	int t,s,i,counter;
	cin>>t;
	while(t--)
	{
		cin>>s;
		for(i=0;i<=s;i++)
		{
			if (i%2 == 0)
			{
				counter++;
			}
		}
		cout<<counter<<endl;
		counter = 0;
	}
}


