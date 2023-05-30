#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string ballons;
		cin>>ballons;
		int i,j,count;
		int a = 0,b = 0;
		for(i=0;i<ballons.length();i++)
		{
			if(ballons[i] == 'a')
			{
				a++;
			}
			else if(ballons[i] == 'b')
			{
				b++;
			}
		}
		int total = ballons.length();
		if(a>b)
		{
			cout<<total-a<<endl;
		}
		else if(b>a)
		{
			cout<<total-b<<endl;
		}	
		else if(b==a) 
		{
			cout<<a<<endl;
		}
	}
}
