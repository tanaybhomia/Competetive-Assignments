#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int x;
		cin >> x;
		float y;
		y =0.143 * x;
		y = pow(y,x);
		cout << round(y) << endl;
	}
	return 0;
}