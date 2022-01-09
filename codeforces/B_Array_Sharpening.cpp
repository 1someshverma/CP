#include<bits/stdc++.h>
using namespace std;
#define N 300005
int t,n,a[N];
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		int l=1,r=n;
		while(a[l]>=l-1&&l<=n)l++;
		while(a[r]>=n-r&&r>0)r--;
		l--,r++;
		puts(l>=r?"Yes":"No");
	}
	return 0;
}