// https://www.codechef.com/problems/SNAKPROC
// 1014

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n , count = 0 , i, j = 0;
		cin>>n;
		string snake;
		cin>>snake;
		string snakeonly(n,' ');
		for(i=0;i<n;i++)
		{
			if (snake[i] == 'H' || snake[i] == 'T')
			{
				snakeonly[j] = snake[i];
				j++;
			}
		}
		cout<<snakeonly<<endl;
		int check = 1;
		for(i=0;i<size-1;i++)
		{
			if (snakeonly[size-1] == 'H')
			{
				check = 0;
				break;
			}
			else 
			{
				if ((snakeonly[i] == 'H' && snakeonly[i+1] == 'T') || (snakeonly[i] == 'T' && snakeonly[i+1] == 'H'))
				{
					continue;
				}
				else		 
				{
					check = 0;
					break;
				}		
			}		
		}
		if (check == 0)
		{
			cout<<"Invalid"<<endl;
		}
		else if (check == 1)
		{
			cout<<"Valid"<<endl;
		}
	}
}
