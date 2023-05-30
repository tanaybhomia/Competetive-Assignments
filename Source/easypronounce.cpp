#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,count = 0;
		cin>>n;
		string word;
		cin>>word;
		for(i=0;i<n;i++)
		{
			if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u')
			{
				count = 0;
				continue;
			}
			else
			{
				count++;
				if(count>=4)
				{
					break;
				}
			}
		}
		if (count >= 4)
		{
			cout<<"No"<<endl;
		}
		else
		{
			cout<<"Yes"<<endl;
		}
	}
}
