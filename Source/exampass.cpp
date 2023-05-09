#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,am,bm,cm,tm,cond1;
		cin>>am>>bm>>cm>>tm>>a>>b>>c;
		cond1 = a+b+c;
		if (cond1 >= tm)
		{
			if (a>=am && b>=bm && c>=cm)
			{
				cout<<"Yes"<<endl;
			}
			else 
			{
				cout<<"No"<<endl;
			}
		}
		else 
		{
			cout<<"No"<<endl;
		}
	}
}
