#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,check;
		cin>>a>>b;
		check = a+b;
		if (check % 2 == 0)
		{
			cout<<"Bob"<<endl;
		}
		else 
		{
			cout<<"Alice"<<endl;
		}
	}
}
