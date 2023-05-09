#include <iostream>
using namespace std;
int main()
{
	int t,a1,a2,b1,b2;
	cin>>t;
	while(t--)
	{
		cin>>a1>>b1>>a2>>b2;
		int aans1 ,bans2;
		aans1 = a2/a1;
		bans2 = b2/b1;
		cout<<aans1+bans2<<endl;
	}	
}
