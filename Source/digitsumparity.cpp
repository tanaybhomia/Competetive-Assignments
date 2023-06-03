// https://www.codechef.com/problems/DIGSMPAR
// 1077

#include <iostream>
using namespace std;
class operation
{
	public:
	int getsum(int n)
	{
		int sum = 0;
		while(n!=0)
		{
			sum = sum+n%10;
			n = n/10;
		}
		return sum;
	}
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		operation o;
		int sum = o.getsum(n);
		int finalans;
		while(sum%2 == 0)
		{
			n = n+1;
			sum = o.getsum(n);
			if (sum%2 != 0)
			{
				finalans = n;
				break;
			}
		}
		cout<<finalans<<endl;
		finalans = 0;
	}
}
