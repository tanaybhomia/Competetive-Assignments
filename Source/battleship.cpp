#include <iostream>
using namespace std;
int main(){
	char x;
	int t;
	cin>>t;
	while(t){
		cin>>x;
		if (x=='B'||x=='b'){
			cout<<"BattleShip"<<"\n";
		}
		else if (x=='C'||x=='c'){
			cout<<"Cruiser"<<"\n";	
		}
		else if (x=='D'||x=='d'){
			cout<<"Destroyer"<<"\n";	
		}
		else if (x=='F'||x=='f'){
			cout<<"Frigate"<<"\n";	
		}
		t--;
	}
}
