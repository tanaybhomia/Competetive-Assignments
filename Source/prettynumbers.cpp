#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int l,r,i;
		int counter;
		int no;
		cin>>l>>r;
		for (i=l;i<=r;i++)
		{
			no = i%10;
			if (no == 2 || no == 3 || no == 9)
			{
				counter++;
			}
		}
		cout<<counter<<endl;
		counter = 0;
	}
}
