// https://www.codechef.com/problems/ATTENDU
// 1053

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		// number of days 
		int n,att = 0;
		cin>>n;
		string arr;
		cin>>arr;
		
		// counting attendance 
		int i,j = 0,count = 0;
		for(i=0;i<n;i++)
		{
			if (arr[i] == '1')
			{
				att++;
			}
		}
		
		// calculating ans 
		float rem = 120-n;
		float possible = rem+att;
		float ans;
		ans = (possible/120)*100;
		if (ans < 75)
		{
			cout<<"NO"<<endl;
		}
		else if (ans >= 75)
		{
			cout<<"YES"<<endl;
		}
	}
}
