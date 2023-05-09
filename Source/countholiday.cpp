#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,compholiday,total;
		compholiday = 8;
		cin>>n;
		int hol[n];
		for (i=0;i<n;i++)
		{
			cin>>hol[i];
		}
		for (i=0;i<n;i++)
		{
			if (hol[i] != 6 && hol[i] != 13 && hol[i] != 20 && hol[i] != 27 && hol[i] != 7 && hol[i] != 14 && hol[i] != 21 && hol[i] != 28)
			{
				compholiday = compholiday + 1;
			}
		}
		cout<<compholiday<<endl;
	}	
}
