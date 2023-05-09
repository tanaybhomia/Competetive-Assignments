#include <iostream>
using namespace std;
int problems[4];
// for the number of problems 
int i; 
// for looping 
int j=0;
// for looping 
int sum=0;

int main()
{
	for(i=0;i<4;i++)
	{
		cin>>problems[i];
	}
	while (j<3)
	{
		for (i=0;i<4;i++)
		{
			if(problems[j]>=10)
			{
				sum=sum+1;
			}
			j++;
		}
	}
	cout<<sum;
	return 0;
}
