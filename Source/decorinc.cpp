#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n;
  	 float ans;
  	 cin>>n;
  	 ans = n/4;
    if (ans-(int)ans == 0)
    {
   	 n = int(n)+1;
   	 cout<<n;
    }
    else
    {
   	 n = int(n)-1;
   	 cout<<n;
    }
}

