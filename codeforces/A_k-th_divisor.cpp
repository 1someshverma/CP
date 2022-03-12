#include <bits/stdc++.h>
#define int long long 
using namespace std;
vector <int> v;
signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,k;
	cin >> n >> k;
	for(int i=1;i*i<=n;i++)
	{
		if(n%i==0)
		{
			v.push_back(i);
			if(i*i!=n) v.push_back(n/i);
		}
	}
	if(v.size()<k)
	{
		cout << "-1";
		return 0;
	}
	sort(v.begin(),v.end());
	cout << v[k-1];
	return 0;
}