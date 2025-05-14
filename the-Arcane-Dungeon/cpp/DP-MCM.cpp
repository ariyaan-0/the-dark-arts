#include <bits/stdc++.h>
using namespace std;
const int N=100100;
int arr[N];
int dp[1000][1000];

int mcm(int l, int r){
	if(l>=r) return 0;
	if(dp[l][r]!=-1) return dp[l][r];

	int res=100000;
	int temp;
	for(int k=l; k<r; k++){
		temp=mcm(l, k)+mcm(k+1, r)+(arr[l-1]*arr[k]*arr[r]);
		res=min(res, temp);
		dp[l][r]=res;
	}
	return dp[l][r];

}

int main(){
	memset(dp, -1, sizeof(dp));
	int n; cin>>n;
	int a, b;
	for(int i=0; i<n; i++){
		cin>>a>>b;
		arr[i]=a;
		if(i==n-1)
			arr[++i]=b;
	}
	cout<<mcm(1, n)<<endl;
}
