#include <iostream>
#define ll long long int
using namespace std;

#include<vector>
#include<utility>


pair<ll,ll> MinMax(vector<ll> &a)
{
	ll i, n = a.size();
	pair<ll,ll> minmax;

	if(n%2 == 0)
	{
		if(a[0]<a[1])
		{
			minmax.first = a[0];
			minmax.second = a[1];
		}
		else
		{
			minmax.first = a[1];
			minmax.second = a[0];
		}

		i = 2;
	}
	else
	{
		minmax.first = minmax.second = a[0];
		i = 1;
	}

	while(i < n-1)
	{
		if(a[i] > a[i+1])
		{
			if(a[i] > minmax.second)
				minmax.second = a[i];
			if(a[i+1] < minmax.first)
				minmax.first = a[i+1];
		}
		else
		{
			if(a[i+1] > minmax.second)
				minmax.second = a[i+1];
			if(a[i] < minmax.first)
				minmax.first = a[i];
		}

		i += 2;
	}

	return minmax;
}


int main()
{
	vector<ll> a = {12,56,89,2,36,78,100,56};
	pair<ll,ll> minmax = MinMax(a);
	cout<<minmax.first<<" "<<minmax.second<<endl;
    return 0;
}
