#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int pa,pb,pc,forac;
		cin>>pa>>pb>>pc;
		forac = pa+pc;
		if (forac > pb)
		{
			cout<<forac<<endl;
		}
		else if (pb > forac)
		{
			cout<<pb<<endl;
		}
		else if (pb == forac)
		{
			cout<<forac<<endl;
		}
	}
}
