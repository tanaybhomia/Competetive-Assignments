// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CHEGLOVE
// 1104

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int length[n],glove[n];
		for(int i = 0; i < n; i++)
		{
			cin>>length[i];
		}
		for(int i = 0; i < n; i++)
		{
			cin>>glove[i];
		}

		// for front 
		int frontflag = 0;
		for(int i = 0;i<n;i++)
		{
			if(length[i] <= glove[i])
			{
				frontflag = 1;
				continue;
			}
			else 
			{
				frontflag = 0;
				break;
			}
		}

		// for back
		int backflag = 0;
		for (int i = 0, j = n - 1; i < n && j >= 0; ++i, --j)
		{
			if(length[i] <= glove[j])
			{
				backflag = 1;
				continue;
			}
			else
			{
				backflag = 0;
				break;
			}
		}

		if(backflag == 1 && frontflag == 1)
		{
			cout<<"both"<<endl;
		}
		else if(backflag == 1)
		{
			cout<<"back"<<endl;
		}
		else if(frontflag == 1)
		{
			cout<<"front"<<endl;
		}
		else
		{
			cout<<"none"<<endl;
		}
	}
	return 0;
}