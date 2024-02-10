#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x;
		cin>>x;
		int off,disc = 100;
		off = x*0.1;
		int ans = max(off,disc);
		cout<<ans<<endl;
	}
}