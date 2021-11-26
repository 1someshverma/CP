    #include <iostream>
    #include <vector>
    #include <string>
    #include <algorithm>
     
    using namespace std;
     
    int main()
    {
    	int n, k;
    	cin >> n >> k;
    	int mx = 200;
    	vector<int> cnt(mx);
    	for (int i = 0; i < n; i++) {
    		int x;
    		cin >> x;
    		cnt[x]++;
    	}
    	int mx_elem = *max_element(cnt.begin(), cnt.end());
    	int q = (mx_elem + k - 1) / k * k;
    	int ans = 0;
    	for (int i = 0; i < mx; i++) {
    		if (cnt[i] == 0) continue;
    		ans += q - cnt[i];
    	}
    	cout << ans << endl;
    	return 0;
    }