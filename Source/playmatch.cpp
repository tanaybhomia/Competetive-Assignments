// https://www.codechef.com/problems/MATCHES
// 986


#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,y,ans,finalans = 0,p,temp,i;
		cin>>x>>y;
		ans = x+y;
		int matches[10] = {6,2,5,5,4,5,6,3,7,6};
		string ans1 = to_string(ans);
		for(i=0;i<ans1.length();i++)
		{
			p =ans1[i] - '0';
			temp = matches[p];
			finalans = finalans+temp;
		} 
		cout<<finalans<<endl;
	}
}
