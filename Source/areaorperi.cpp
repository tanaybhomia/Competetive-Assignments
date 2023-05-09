#include <iostream>
using namespace std;
int main()
{
	int l,b;
	cin>>l;
	cin>>b;
	int area,peri;
	area = l*b;
	peri = 2*(l+b);
	if (area > peri)
	{
		cout<<"Area"<<endl;
		cout<<area<<endl;
	}
	else if (peri > area)
	{
		cout<<"Peri"<<endl;
		cout<<peri<<endl;
	}
	else
	{
		cout<<"Eq"<<endl;
		cout<<area<<endl;
	}
}
