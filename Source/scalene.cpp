#include <iostream>
using namespace std;
int main(){
	int t,a,b,c,i;
	cin>>t;
	while(t)
	{
		cin>>a>>b>>c;
		if (a!=b && a!=c)
		{
			cout<<"YES\n";
		}
		else if (c!=a && c!=b)
		{
			cout<<"YES\n";
		}
		else 
		{
			cout<<"NO\n";
		}
		t--;
	}
}
