#include <iostream>
using namespace std;
int main()
{
	int i,x;
	do 
	{
		cin>>x;
		if (x==42)
		{
			continue;
		}
		cout<<x<<"\n";
	}while(x!=42);
}
