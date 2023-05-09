#include <iostream>
using namespace std;
int main()
{
	int x;
	int ans;
	int i = 1;
	cin>>x;
	while(i<=10)
	{
		if (x%i == 0)
		{
			ans = i;
		}
		i = i+1;
	}
	cout<<ans<<endl;
}
