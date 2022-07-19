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
// void solve()
// {
//     int n;
//     cin>>n;
//     vi p(n),q(n);
//     int i;
//     fo(i,n){
//         cin>>p[i];
//         q[i]=p[i];
//     }
//     if(n==1){
//         cout<<"-1"<<endl;
//         return;
//     }
//     sort(all(q));
//     // for(i=n-1;i>=1;i-=2){
//     //     if(q[i]==p[i] || q[i-1]==p[i-1]){
//     //         swap(q[i],q[i-1]);
//     //         // swap(q[i+1],p[i]);
//     //     }
//     // }
//     for(i=0;i<n-1;){
//         if(q[i]==p[i] ){
//             swap(q[i],q[i+1]);
//             i++;
//             // swap(q[i+1],p[i]);
//         }else if(q[i+1]==p[i+1]){
//             swap(q[i],q[i+1]);
//         }
//         i++;
//     }
//     if(q[n-2]==p[n-2] || q[n-1]==p[n-1]){
//         swap(q[n-2],q[n-1]);
//         // swap(q[n-1],p[n-2]);
//     }
//     fo(i,n){
//         cout<<q[i]<<" ";
//     }
//     cout<<endl;
// }
void print(vector<int>& ans)
{
	int num=ans.size();
	int sum;
	int pre;
	for(int i=0;i<num;i++)
	{

			cout << ans[i] << " ";
		}
}

void solve()
{
		int n;
		cin >>n;
		vi input(n);
		
		for(int i=0;i<n;i++)
			cin >> input[i];
			if(n==1)
			{
				cout << "-1\n";
				return;
			}
		priority_queue<int,vector<int>,greater<int>> prio;
		for(int i=0;i<n;i++)
			prio.push(input[i]);
		int current;
		vi answer;
        int i;
		fo(i,n-1)
		{
			current=prio.top();
			prio.pop();
			if(current==input[i])
			{
				answer.push_back(prio.top());
				prio.pop();
				prio.push(current);
			}
			else
				answer.push_back(current);
		}
		answer.push_back(prio.top());
		if(answer[n-1]==input[n-1])
			swap(answer[n-2],answer[n-1]);
        for(int i=0;i<n;i++)
	    {
			cout << answer[i] << " ";
		}
		// print(answer);
			cout << endl;
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
