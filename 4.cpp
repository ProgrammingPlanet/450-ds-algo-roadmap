#include <iostream>
#define ll long long int
using namespace std;

#include<vector>
#include<algorithm>


void sort012(vector<ll> &a)
{
	vector<ll> freq(3,0);

	for(ll i=0; i<a.size(); i++)
	{
		freq[a[i]]++;
	}

	for(ll i=0,k=0; i<freq.size(); i++)
	{
		for(ll j=0; j<freq[i]; j++)
		{
			a[k++] = i;
		}
	}
}


int main()
{
	vector<ll> a = {0,1,2,2,1,1,0,1,2};
	sort012(a);
	for(auto x : a)
	{
		cout<<x<<" ";
	}
    return 0;
}
