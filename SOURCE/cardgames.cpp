#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
		int chefw = 0,mortyw = 0;
        while (n--) 
		{
            int chef, morty;
            cin >> chef >> morty;
            if (chef >= 10) 
			{
                int temp = 0;
                while (chef > 0) 
				{
                    temp += chef % 10;
                    chef /= 10;
                }
                chef = temp;
            }
			else
			{
				chef=chef;
			}
            if (morty >= 10)
			{
				int temp = 0;
				while(morty > 0)
				{
					temp+=morty%10;
					morty/=10;
				}
				morty=temp;
			}
			else
			{
				morty = morty;
			}
			if(morty > chef)
			{
				mortyw++;
			}
			else if(chef > morty)
			{
				chefw++;
			}
        }
		if(chefw > mortyw)
		{
			cout<<0" "<<chefw<<endl;
		}
		else if(mortyw > chefw)
		{
			cout<<1" "<<mortyw<<endl;
		}
		else if(chefw == mortyw)
		{
			cout<<2" "<<chefw<<endl;
		}
    }
    return 0;
}