#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int da,db,dc,sa,sb,sc;
		cin>>da>>db>>dc;
		cin>>sa>>sb>>sc;
		int dtotal,stotal;
		dtotal=da+db+dc;
		stotal=sa+sb+sc;
		if (dtotal==stotal) 
		{
			if(da>sa)
			{
				cout<<"DRAGON"<<endl;
			}
			else if (sa>da)
			{
				cout<<"SLOTH"<<endl;
			}
			else if (da == sa)
			{
				if (db > sb)
				{
					cout<<"DRAGON"<<endl;
				}
				else if(sb > db)
				{
					cout<<"SLOTH"<<endl;
				}
				else 
				{
					cout<<"TIE"<<endl;
				}
			}
		}
		else if (dtotal>stotal)
		{
			cout<<"DRAGON"<<endl;
		}
		else if (stotal>dtotal)
		{
			cout<<"SLOTH"<<endl;
		}
	}
}