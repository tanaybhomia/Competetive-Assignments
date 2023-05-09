#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[3],b[3];
		int i,j;
		int apoint = 0;
		int bpoint = 0;
		for(i=0;i<3;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<3;i++)
		{
			cin>>b[i];
		}
		for (i=0;i<3;i++)
		{
			if(a[i]>b[i])
			{
				apoint++;
			}
			else if (b[i]>a[i])
			{
				bpoint++;
			}
		}
		if (apoint>bpoint)
		{
			cout<<"A"<<endl;
		}
		else if (bpoint > apoint)
		{
			cout<<"B"<<endl;
		}
	}
}
