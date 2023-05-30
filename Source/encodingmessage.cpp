//https://www.codechef.com/problems/ENCMSG
// 1027 

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x1;
		string s;
		cin>>n;
		cin>>s;
		int i,j = i+1;
		char temp,x;
		
		// swaping letters 
		
		if (n%2 != 0)
		{
			for (i=0;i<n;i+=2)
			{
				j = i+1;
				if (j==n)
				{
					break;
				}
				else 
				{
					temp = s[j];
					s[j] = s[i];
					s[i] = temp;
				}
				j = j+2;
			}
		}
		else if (n%2 == 0)
		{
			for (i=0;i<n;i+=2)
			{
				j = i+1;
				temp = s[j];
				s[j] = s[i];
				s[i] = temp;
				j = j+2;
			}
		}
	
		// changing the letters
		
		char alpha[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
		char revalpha[] = {'z','y','x','w','v','u','t','s','r','q','p','o','n','m','l','k','j','i','h','g','f','e','d','c','b','a'};
		for (i=0;i<n;i++)
		{
			x = s[i];
			for (j=0;j<26;j++)
			{
				if (x==alpha[j])
				{
					s[i] = revalpha[j];
					break;
				}
			}
		}
		cout<<s<<endl;
	}
}
