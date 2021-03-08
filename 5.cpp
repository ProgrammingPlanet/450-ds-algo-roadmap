#include <iostream>
#define ll long long int
using namespace std;

#include<vector>
#include<algorithm>


void rearrange(vector<ll> &a)
{
	ll j = 0, n = a.size();

	for(ll i=0; i<n; i++)
	{
		if(a[i] < 0)
		{
			swap(a[i],a[j]);
			j++;
		}
	}

}


int main()
{
	vector<ll> a = {-12,11,-5,6,-7,5,-3};
	rearrange(a);
	for(auto x : a)
	{
		cout<<x<<" ";
	}
    return 0;
}
