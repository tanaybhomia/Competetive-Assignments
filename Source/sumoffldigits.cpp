#include <iostream>
using namespace std;
int main(){
	int t,x,sum,i,rem;
	cin>>t;
	while (t){
		cin>>x;
		rem = x%10;
		while (x>9)
		{
			x = x/10;
		}
		sum = x+rem;
		cout<<sum<<"\n";
		t--;
	}
}
