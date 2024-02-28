#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <cctype>
#include <math.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		float n;
		float temp;
		cin>>n;
		if(n==1)
		{
			cout<<"1 1"<<endl;
		}
		else
		{
			temp = n/2;
			float max,min;
			max = ceil(temp);
			min = floor(temp);
			cout<<max<<" "<<min<<endl;
		}
	}
return 0;
}