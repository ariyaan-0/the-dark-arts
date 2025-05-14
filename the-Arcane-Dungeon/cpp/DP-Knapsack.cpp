#include <bits/stdc++.h>
using namespace std;

int wi[1010];
int b[1010];
int dp[40][1010];

int knapsack(int i, int w){
	if(w<0) return -1000000;
	if(i<0|| w==0) return 0;
	if(dp[i][w]!=-1) return dp[i][w];

	int r1=knapsack(i-1, w-wi[i])+b[i];
	int r2=knapsack(i-1, w);
	dp[i][w]=max(r1, r2);
	return dp[i][w];
}

int main(){
	memset(dp, -1, sizeof(dp));
	int n, w; 
	cin>>n>>w;
	for(int i=0; i<n; i++){
		cin>>b[i];
	}
	for(int i=0; i<n; i++){
		cin>>wi[i];
	}
	cout<<knapsack(n-1, w)<<endl;
	return 0;
}