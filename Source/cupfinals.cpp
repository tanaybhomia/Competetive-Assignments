#include <iostream>
using namespace std;
int main(){
	int t;
	int x,y,z,ans;
	cin>>t;
	while(t){
		cin>>x>>y>>z;
		if (x>=y){
			ans = x-y;
		}
		else if (y>x){
			ans = y-x;
		}
		if (ans <= z){
			cout<<"YES\n";
		}
		else if (ans > z){
			cout<<"NO\n";
		}
		t--;
	}
}
