#include <iostream>
using namespace std;
int main()
{
	int x,y,h;
	cin>>x>>y>>h;
	int ans = x;
	int dum = h-1;
	int total = dum*y;
	int finalans = ans+total;
	cout<<finalans<<endl;
}
