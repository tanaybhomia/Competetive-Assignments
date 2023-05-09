// https://www.codechef.com/problems/THREEQ
// 954

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int saintp,herop,i;
		int saint[3],hero[3];
		for (i =0;i<3;i++)
		{
			cin>>saint[i];
		}
		for (i = 0;i<3;i++)
		{
			cin>>hero[i];
		}
		for (i=0;i<3;i++)
		{
			if (saint[i] == 1)
			{
				saintp++;
			}
		}
		for (i=0;i<3;i++)
		{
			if (hero[i] == 1)
			{
				herop++;
			}
		}
		if (herop == saintp)
		{
			cout<<"Pass"<<endl;
		}
		else 
		{
			cout<<"Fail"<<endl;
		}
		herop = 0;
		saintp = 0;
	}
}
