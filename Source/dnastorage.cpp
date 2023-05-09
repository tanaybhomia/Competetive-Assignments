#include <iostream>
using namespace std;
int main()
{
	int t,i,j,k;
	int n;
	int x,y;
	cin>>t;
	int storage[2];
	while(t)
	{
		cin>>n;
		int arr[n];
		for (i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for (i=0;i<n;i++) 
		{ 
			for (j=i+1;j<n;j++) 
			{ 
				if (i==0&&j==0)
				{ 
					cout<<"A";
				} 
				else if (i==0&&j==1) 
				{ 	
					cout<<"T"; 
				}
				else if (i==1&&j==0) 
				{ 
					cout<<"C"; 
				} 
				else if (i==1&&j==1) 
				{ 
					cout<<"G"; 
				}
			}
		}
		t--;
	}
}
