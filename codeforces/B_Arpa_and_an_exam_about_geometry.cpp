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
#define sqr(x) (ll)(x)*(x)
#define dist(x,y,xx,yy) (sqr(x-xx)+sqr(y-yy))
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
    int x1,x2,x3,y1,y2,y3;
	scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
	if ((ll)(x2-x1)*(y3-y1)==(ll)(y2-y1)*(x3-x1)){
		puts("No"); return ;
	}
	puts((dist(x1,y1,x2,y2)==dist(x2,y2,x3,y3))?"Yes":"No");
    // ll ax,ay,bx,by,cx,cy;
    // cin>>ax>>ay>>bx>>by>>cx>>cy;
    // float x=sqrt((ax-bx)*(ax-bx)+(ay-by)*(ay-by));
    // float y=sqrt((bx-cx)*(bx-cx)+(by-cy)*(by-cy));
    // ll z=ax*(by-cy)+bx*(cy-ay)+cx*(cy-by);
    // if(x!=y || z==0){
    //     cout<<"No"<<endl;
    // }else{
    //     cout<<"Yes"<<endl;
    // }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);


    ll test=1;
//cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
