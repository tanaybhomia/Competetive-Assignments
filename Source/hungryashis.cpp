// https://www.codechef.com/problems/PIZZA_BURGER
// 1064

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    	int x,y,z;
    	cin>>x>>y>>z;
    	// x amount of money ashish has 
    	// y for PIZZA
    	// z for BURGER
    	
    	if (x>=y)
    	{
    		cout<<"PIZZA"<<endl;
    	}
    	else if (x>=z)
    	{
    		cout<<"BURGER"<<endl;
    	}
    	else 
    	{
    		cout<<"NOTHING"<<endl;
    	}
    }
}
