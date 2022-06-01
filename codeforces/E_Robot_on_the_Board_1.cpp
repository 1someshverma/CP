#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7,inf = 1e18;
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{   
    int t;
    cin>>t;
    while (t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        ll deltaX = 0,deltaY = 0;
        ll maxDeltaX = 0,minDeltaX = 0;
        ll maxDeltaY = 0,minDeltaY = 0;
        int ansX = 1,ansY = 1;
        for (char x:s){
            if (x == 'L')
                deltaY--;
            if (x == 'R')
                deltaY++;
            if (x == 'U')
                deltaX--;
            if (x == 'D')
                deltaX++;
            minDeltaX = min(minDeltaX,deltaX);
            minDeltaY = min(minDeltaY,deltaY);
            maxDeltaX = max(maxDeltaX,deltaX);
            maxDeltaY = max(maxDeltaY,deltaY);
            //now find an x: x + maxDeltaX <= n
            //and x + minDeltaX >= 1
            int maxX = n - maxDeltaX;
            int minX = 1 - minDeltaX;
            int maxY = m - maxDeltaY;
            int minY = 1 - minDeltaY;
            if (minX <= maxX and minY <= maxY){
                ansX = minX;
                ansY = minY;
            }
            else break;
        }
        cout<<ansX<<" "<<ansY<<endl;
    }
    return 0;
}