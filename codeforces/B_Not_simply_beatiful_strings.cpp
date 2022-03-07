#pragma comment(linker, "/STACK:256000000")

#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>
#include <assert.h>
#include <time.h>
#include <memory.h>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <utility>
#include <algorithm>
#include <random>
#include <bitset>
#include <unordered_set>
#include <unordered_map>

using namespace std;

typedef long long int64;
typedef unsigned long long uint64;
typedef pair<int, int> pii;
typedef pair<int64, int64> pll;
typedef pair<int64, int> pli;
typedef pair<int, int64> pil;
const int INF = (int)(1e9 + 1e5);
const int64 LINF = (int64)(1e18);
const int64 MX = 100500;
const double EPS = 1e-9;
#define sq(x) ((x)*(x))
#define FAIL() (*(int*)(0))++
#define ASSERT(exp) {if (!(exp)) exit(0);}
#ifdef _MY_DEBUG
#define I64d lld
#endif
const int MOD = 1000000007;
const int ROOT = 700;
const int PRM_ROOT = 5;
const int LOG = 30;

string s;
map<char, int> cnt;
string ans;

void init()
{
    cin >> s;
}

void solve()
{
    for (char c: s)
    {
        ++cnt[c];
    }
    
    vector<int> cn;
    for (auto it : cnt)
    {
        cn.push_back(it.second);
    }
    sort(cn.begin(), cn.end());
    if (cn.size() >= 5)
    {
        ans = "No";
    }
    else if (cn.size() == 4)
    {
        ans = "Yes";
    }
    else if (cn.size() == 3)
    {
        ans = cn.back() >= 2 ? "Yes" : "No";
    }
    else if (cn.size() == 2)
    {
        ans = cn[0] >= 2 && cn[1] >= 2 ? "Yes" : "No";
    }
    else
    {
        ans = "No";
    }
}

void print_answer()
{
    cout << ans;
}

void precalc()
{

}

void run()
{
#ifdef _MY_DEBUG
    freopen("input.txt", "rt", stdin); freopen("output.txt", "wt", stdout);
#endif // _MY_DEBUG
    precalc();
    int t = 1; //scanf ("%d", &t);
    for (int i = 0; i < t; ++i)
    {
        init();
        solve();
        print_answer();
    }
}
int main()
{
    srand(90);
    ios_base::sync_with_stdio(false); cin.tie(0);
    //test();
    run();
    return 0;
}