#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N = 51;

int n, m;
int a[N][N];

int32_t main()
{
	IOS;
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> m;
		set< int > r, c;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++)
			{
				cin >> a[i][j];
				if(a[i][j] == 1)
					r.insert(i), c.insert(j);
			}
		}
        int x=n-r.size(),y=m-c.size();
		int mn = min(x,y);
		if(mn % 2)
			cout << "Ashish" << endl;
		else
			cout << "Vivek" << endl;
	}
	return 0;
}