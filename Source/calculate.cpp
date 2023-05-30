#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	char c;
	cin>>a>>b>>c;
	int ans;
	switch(c)
	{
		case '+':
			cout<<a+b;
			break;
		case '-':
			cout<<a-b;
			break;
		case '/':
			if(a!=0)
			{
                cout<<fixed<<setprecision(1)<<double(a)/b<<endl;
                break;
            }
            else if (a==0)
            {
                cout<<0<<endl;
                break;
            }
		case '*':
			cout<<a*b;
			break;
	}
}
