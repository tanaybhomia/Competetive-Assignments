// https://www.codechef.com/problems/AIRLINE
// 1042

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,e;
		cin>>a>>b>>c>>d>>e;
		
		// Checked in Bags limit is D
		// Carrying the bag with limit E
		
		int comb1,comb2,comb3;
		comb1 = a+b;
		comb2 = b+c;
		comb3 = a+c;
		if (comb1 <= d && c <= e)
		{
			cout<<"YES"<<endl;
		}
		else if (comb2 <= d && a <= e)
		{
			cout<<"YES"<<endl;
		}
		else if (comb3 <= d && b <= e)
		{
			cout<<"YES"<<endl;
		}
		else 
		{
			cout<<"NO"<<endl;
		}
	}
}
