// https://www.codechef.com/problems/CFRTEST
// 1061

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
 		int n;
 		cin>>n; // number of friends 
 		
 		int arr[n],saved = 0,over = 0;
 		for (int i=0;i<n;i++)
 		{
 			cin>>arr[i];
 		}   
 		int check = arr[0]; 
 		for (int i=1;i<n;i++)
 		{
 			if (check != arr[i])
 			{
 				saved++;
 			}
 		}
 		cout<<saved+1<<endl;
    }
}
