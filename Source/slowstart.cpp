#include <iostream>
using namespace std;
int main()
{
	int t,x,h,damage = 0,turn;
	cin>>t;
	while(t--)
	{
		cin>>x>>h;
		for(int i = 1;i<=5;i++)
		{
			damage = x/2+(damage);
			if (damage>=h)
			{
				turn = i;
				break;
			}
			cout<<turn<<endl;
		}
	}
}