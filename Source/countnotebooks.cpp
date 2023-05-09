#include <iostream>
using namespace std;
int main()
{
	int t,pages,notebooks,pulp;
	cin>>t;
	while(t)
	{
		cin>>pulp;
		pages = pulp * 1000;
		notebooks = pages / 100;
		cout<<notebooks<<"\n";
		t--;
	}
}
