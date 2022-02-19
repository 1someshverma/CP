#include <bits/stdc++.h>

#define forn(i, n) for (int i = 0; i < int(n); i++)

using namespace std;

int n, m;
long long k;

int main() {
	scanf("%d%d%lld", &n, &m, &k);
	if (k < n){
		printf("%lld 1\n", k + 1);
		return 0;
	}
	k -= n;
	long long row = k / (m - 1);
	printf("%lld ", n - row);
	if (row & 1)
		printf("%lld\n", m - k % (m - 1));
	else
		printf("%lld\n", k % (m - 1) + 2);
	return 0;
}