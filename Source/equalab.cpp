// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EQUALIZEAB
// 

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,x;
		cin>>a>>b>>x;
		if (a==1 && b==1)
		{
			cout<<"YES"<<endl;
		}
		else if (a==1 && b%2 != 0)
		{
			cout<<"NO"<<endl;
		}
		else if (a%2 == 0 && b%2 == 0)
		{
			cout<<"YES"<<endl;
		}
		else if (a%2 != 0 && b%2 != 0)
		{
			cout<<"YES"<<endl;
		}
		else 
		{
			cout<<"NO"<<endl;
		}
	}
}
