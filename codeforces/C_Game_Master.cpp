#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;
#define ll long long
#define gc getchar_unlocked
#define ll long long
#define PI 3.1415926535897932384626
#define fo(i, n) for(i=0;i<n;i++)
#define Fo(i, k, n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, x) for(auto it = x.begin(); it != x.end(); it++)
#define trr(it, x) for(auto it = x.rbegin(); it != x.rend(); it+)
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
#define mod 1000000007
void solve()
{
    	int n;
	cin >> n;
	vector<int> A(n);
	vector<int> B(n);
	vector<int> a(n), b(n);
	for(int& x : A) cin >> x;
	for(int& x : B) cin >> x;
	for(int i = 0; i < n; i++) a[i] = b[i] = i;
	sort(a.begin(), a.end(), [&](int x, int y) { return A[x] > A[y]; });
	sort(b.begin(), b.end(), [&](int x, int y) { return B[x] > B[y]; });
	vector<int> freq(n, 0);
	set<int> zeroes;
	string ans(n, '0');
	for(int i = 0; i < n; i++){
		freq[a[i]]++;
		freq[b[i]]--;
		if(freq[a[i]]) zeroes.insert(a[i]);
		if(freq[b[i]]) zeroes.insert(b[i]);
		if(!freq[a[i]]) zeroes.erase(a[i]);
		if(!freq[b[i]]) zeroes.erase(b[i]);
		if(zeroes.empty()){
			for(int j = 0; j <= i; j++) ans[a[j]] = '1';
			break;
		}
	}
	cout << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    ll test=1;
cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
