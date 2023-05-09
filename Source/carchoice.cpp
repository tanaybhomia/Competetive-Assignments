#include <iostream>
using namespace std;
int main()
{
	float x1,x2;
	//  car 1 runs of patrol with economy of x1 km/l;
	//  car 2 runs of diesel with economy of x2 km/l;
	
	float y1,y2;
	// diesel is y1 rupees / l;
	// patrol is y2 rupees / l;
	
	float car1,car2;
	
	int t,i;
	cin>>t;
	while(t--)
	{
		cin>>x1>>x2>>y1>>y2;
		
		// logic 
		car1 = y1/x1;
		car2 = y2/x2;
		if (car1 < car2)
		{
			cout<< -1 <<endl;
		}
		else if (car1 > car2)
		{
			cout<< 1 <<endl;
		}
		else if (car1 == car2)
		{
			cout<< 0 <<endl;
		}
	}
}
