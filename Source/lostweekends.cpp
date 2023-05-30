// https://www.codechef.com/problems/LOSTWKND
// 1063 

#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    	int days[5],i,j = 0,p;
    	for (i=1;i<=5;i++)
    	{
       		cin>>days[i];
      	} 
		cin>>p;
		
    	int newdays[5],total = 0,possible;
    	possible = 24*5;
       	for (i=1;i<=5;i++)
       	{
    		newdays[i] = p*days[i];
    		total = total + newdays[i];
       	}
       	
    	/*
       	cout<<"Possible is : "<<possible<<endl;;
       	cout<<"Work is : "<<total<<endl;
       	*/
       	
       	
       	if (total <= possible)
       	{
       		cout<<"No"<<endl;
       	}
       	else if (total > possible)
       	{
       		cout<<"Yes"<<endl;
       	}
    }
}
