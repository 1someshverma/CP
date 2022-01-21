#include <bits/stdc++.h>
using namespace std;
 
int dfs(int n)
{
    if (n == 0) return 1;
    if (n < 10) return n;
    return max(dfs(n / 10) * (n % 10), dfs(n / 10 - 1) * 9);
}
 
int main()
{
    int n;
    cin >> n;
    cout << dfs(n) << endl;
}