#include<bits/stdc++.h>
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
    int n,k;
    cin>>n>>k;
    vi p(k);
    int i;
    bool hey[n]={false};
    fo(i,k){
        cin>>p[i];
        p[i]--;
        hey[p[i]]=true;
    }
    vpii cor(n);
    fo(i,n){
        cin>>cor[i].first>>cor[i].second;
    }
    double ans[n][n];
    int j;
    fo(i,n){
        for(j=i+1;j<n;j++){
            ans[i][j]=sqrt(pow((cor[i].first-cor[j].first),2)+pow((cor[j].second-cor[i].second),2));
        }
    }
    double sol[n];
    fo(i,n){
        double x=0.0000000000000;
        fo(j,n){
            if(!hey[j])
                x=max(x,ans[j][i]);
        }
        sol[i]=x;
    }
    cout<<*max_element(sol,sol+n)<<endl;
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
