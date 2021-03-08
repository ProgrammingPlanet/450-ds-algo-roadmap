#include <iostream>
#define ll long long int
using namespace std;

#include<vector>


void reverseArray(vector<ll> &s) 
{
    int n = s.size(), l = 0, r = n-1;
    char x;
    while(l<r)
    {
        x = s[l];
        s[l] = s[r];
        s[r] = x;
        l++;
        r--;
    }
}


int main()
{
	vector<ll> a = {1,2,3,6,5,8,9};
	reverseArray(a);
	for(auto x : a)
	{
		cout<<x<<" ";
	}
    return 0;
}
