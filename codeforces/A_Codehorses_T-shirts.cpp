#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;


int main() {
	int n;
	cin >> n;
	
	vector<string> a(n), b(n);
	forn(i, n) cin >> a[i];
	forn(i, n) cin >> b[i];
	
	map<string, int> cnta, cntb;
	forn(i, n) ++cnta[a[i]];
	forn(i, n) ++cntb[b[i]];
	
	int ans = n;
	for (auto it : cnta) ans -= min(it.second, cntb[it.first]);
	
	cout << ans << endl;
	return 0;
}