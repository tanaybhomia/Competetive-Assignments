#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		// A x> B
		// B y> C
		// C z> A
		
		int a,b,c;
		cin>>a>>b>>c;
		if (a==b && b==c && a==c)
		{
			cout<<"no"<<endl;
		}
		else if (a>b || a>c || b>a || b>c || c>a || c>b)
		{
			cout<<"yes"<<endl;
		}
	}
}
