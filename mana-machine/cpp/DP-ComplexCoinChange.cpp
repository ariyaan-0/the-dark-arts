#include <bits/stdc++.h>
using namespace std;

int coin[40];
int dp[40][10010];

int coinChange(int i, int k){
	if(k==0) return 0;
	if(i<0||k<0) return 100000000;
	if(dp[i][k]!=-1) return dp[i][k];


	int r1=coinChange(i, k-coin[i])+1;
	int r2=coinChange(i-1, k);
	dp[i][k] =min(r1, r2);
	return dp[i][k];
}

int main(){
	memset(dp, -1, sizeof(dp));
	int n, k; cin>>n>>k;
	for(int i=0; i<n; i++){
		cin>>coin[i];
	}
	cout<<coinChange(n-1, k)<<endl;
	return 0;
}