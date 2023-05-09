#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,p,q;
		cin>>x>>y>>p>>q;
		int chef,chefina;
		chef = x+(p*10);
		chefina = y+(q*10);
		if (chef < chefina)
		{
			cout<<"Chef"<<endl;
		}
		else if (chefina < chef)
		{
			cout<<"Chefina"<<endl;
		}
		else if (chefina == chef)
		{
			cout<<"Draw"<<endl;
		}
	}
}
