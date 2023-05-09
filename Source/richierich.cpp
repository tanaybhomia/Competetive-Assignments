#include <iostream>
using namespace std;
int main()
{
	int a,b,x,t,i;
	cin>>t;
	while(t)
	{
		cin>>a>>b>>x;
		int proxy;
		int ans;
		proxy = b-a;
		cout<<proxy/x<<"\n";
		t--;
	}
}
