    #include <bits/stdc++.h>
    #define FOR(i,s,e) for(int i=(s);i<=(e);i++)
    #define FORD(i,s,e) for(int i=(s);i>=(e);i--)
    #define ALL(k) (k).begin(),(k).end()
    #define e1 first
    #define e2 second
    #define mp make_pair
    #define pb push_back
    #define eb emplace_back
     
    using namespace std;
    typedef long long LL;
    typedef unsigned long long LLU;
    typedef long double LD;
    typedef pair<int,int> PII;
    typedef pair<LL,LL> PLL;
    typedef vector<int> VI;
    const bool print=false;
     
    const int N=57;
    const LL mod=1e9+7;
     
    int main(){
    	int n;
    	cin>>n;
    	int ar[n];
    	int ans=INT_MAX, index=0;
    	FOR(i,0,n-1){
    		cin>>ar[i];
    		if(ar[i]<ans){
    			ans = ar[i];
    			index = i+1;
    		}
    	}
    	sort(ar,ar+n);
    	if(n>2){
    		cout<<1<<"\n";
    		cout<<index<<"\n";
    	}
    	else if(n==2){
    		if(ar[0]==ar[1]){
    			cout<<-1<<"\n";
    		}
    		else{
    			cout<<1<<"\n";
    			cout<<index<<"\n";
    		}
    	}
    	else{
    		cout<<-1<<"\n";
    	}
    }