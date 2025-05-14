#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;

int h[N];
int dp[N];

int minCost(int i){
	if(i==0) return 0;
	if(dp[i]!=-1) return dp[i];
	int cost= INT_MAX;
	cost=min(cost, minCost(i-1)+abs(h[i]-h[i-1])); /// way 1
	if(i>1)
	cost=min(cost, minCost(i-2)+abs(h[i]-h[i-2])); /// way 2
	return dp[i]=cost;
}

int main(){
	memset(dp, -1, sizeof(dp));
	int n; cin>>n;
	for(int i=0; i<n; i++){
		cin>>h[i];
	}
	cout<<minCost(n-1)<<endl;

}