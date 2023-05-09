#include <iostream>
using namespace std;
int main()
{
	int x3,x4;
	// will be given 
	int x1,x2;
	// have to find 
	cin>>x3>>x4;
	x2 = x4-x3;
	x1 = x3-x2;
	
	cout<<"So the series becomes\n";
	cout<<x1<<" "<<x2<<" "<<x3<<" "<<x4;
	return 0;
}
