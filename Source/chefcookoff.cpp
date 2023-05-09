// https://www.codechef.com/problems/CCOOK
// 961

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int arr[5];
		int solved = 0;
		for(int i = 0;i<5;i++)
		{
			cin>>arr[i];
		}
		for (int i=0;i<5;i++)
		{
			if (arr[i]==1)
			{
				solved = solved+1;
			}
		}
		switch(solved)
		{
			case 0:
				cout<<"Beginner"<<endl;
				break;
				solved = 0;
			case 1:
				cout<<"Junior Developer"<<endl;
				break;
				solved = 0;
			case 2:
				cout<<"Middle Developer"<<endl;
				break;
				solved = 0;
			case 3:
				cout<<"Senior Developer"<<endl;
				break;
				solved = 0;
			case 4:
				cout<<"Hacker"<<endl;
				break;
				solved = 0;
			case 5:
				cout<<"Jeff Dean"<<endl;
				break;
				solved = 0;
		}
	}
}
