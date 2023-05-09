#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int ans,x,y,i,j;
	int size;
	int arr[size];
	int perm[size];
	int t = 1;
	while(t<=3)
	{
	
		cin>>size;
		
		// inserting elements into the array
		for (i=0;i<size;i++)
		{
			cin>>arr[i];
		}
		for (i=0;i<size;i++)
		{
			for (j=i+1;j<size;j++)
			{
				perm[j]=i+1;
			}
		}
		
		// displaying the array for checking
		cout<<"\n Array 1 is : ";
		for (i=0;i<size;i++)
		{
			cout<<arr[i];
		}
		
		cout<<"\n Permutated array is : ";
		for (i=0;i<size;i++)
		{
			cout<<perm[i];
		}
		
		/*
		for (i = 0;i<size;i++)
		{
			if (arr[i]!=perm[i])
			{
				x = 0;
			}
			else 
			{
				x = 1;
			}
		}
		
		if (x==1)
		{
			cout<<"ambigous"<<endl;
		}
		else if (x == 0)
		{
			cout<<"not ambigous"<<endl;
		}
		*/
		
		t--;
	}
}
