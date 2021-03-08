#include <iostream>
#define ll long long int
using namespace std;

#include<vector>
#include<algorithm>


ll kthSmallest(vector<ll> &a, ll k)
{
	sort(a.begin(), a.end());
	return a[k-1];
}


int main()
{
	vector<ll> a = {12,56,89,2,36,78,100,56};
	ll kth = kthSmallest(a,3);
	cout<<kth<<endl;
    return 0;
}
