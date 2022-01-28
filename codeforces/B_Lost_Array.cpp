#include <bits/stdc++.h>

using namespace std;

const int N = 1007;

int n;
int in[N];

bool ok(int d){
	for(int i = 0; i + d < n; ++i)
		if(in[i + 1] - in[i] != in[i + d + 1] - in[i + d])
			return false;
	return true;
}

int main(){
	scanf("%d", &n);
	for(int i = 1; i <= n; ++i)
		scanf("%d", &in[i]);
	
	vector <int> res;
	for(int i = 1; i <= n; ++i)
		if(ok(i))
			res.push_back(i);
	
	printf("%d\n", res.size());
	for(int v: res)
		printf("%d ", v);
	return 0;
}