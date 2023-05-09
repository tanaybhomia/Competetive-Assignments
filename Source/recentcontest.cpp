#include <iostream>
using namespace std;
int main()
{
	int t,i,size;
	cin>>t;
	cin>>size;
	string problem[size];
	cout<<"Enter the Arrar \n";
	for (i=0;i<size;i++)
	{
		cin>>problem[i];
	}
	cout<<"Array Entered is \n";
	for (i=0;i<size;i++)
	{
		cout<<problem[i];
	}
}
