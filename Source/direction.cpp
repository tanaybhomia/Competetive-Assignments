#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,i;
		int direction,angle = 0;
		cin>>x;
		for (i=1;i<=x;i++)
		{
			angle = angle + 90;
			if (angle == 360)
			{
				angle = 0;
			}
		}
		switch(angle)
		{
			case 90 : 
				cout<<"East"<<endl;
				break;
			case 180 :
				cout<<"South"<<endl;
				break;
			case 270 :
				cout<<"West"<<endl;
				break;
			case 0:
				cout<<"North"<<endl;
				break;
		}
	}
}
