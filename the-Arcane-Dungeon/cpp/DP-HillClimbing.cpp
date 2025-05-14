#include <bits/stdc++.h>
using namespace std;
int hill[45][45];
int dp[45][45];
int k;

int minimum(int a, int b, int c){
	int temp;
	if(a<b){
		temp=a;
	}
	else{
		temp=b;
	}
	if(temp<c)
		return temp;
	else
		return c;
}

int hillClimb(int i, int j){
	
	if(i<0) return 0;
	if(j<0) return 100000;
	if(j>k) return 100000;
	if(dp[i][j]!=-1) return dp[i][j];

	int r1=hillClimb(i-1, j)+hill[i][j];
	int r2= hillClimb(i-1, j+1)+hill[i][j];
	int r3= hillClimb(i-1, j-1)+hill[i][j];
	return dp[i][j]=minimum(r1, r2, r3);
}


int main(){
	memset(dp, -1, sizeof(dp));
	int m, n; cin>>m>>n;
	k=n-1;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>hill[i][j];
		}
	}
	
	//cout<<hillClimb(m-1, n-1)<<endl;
	int res=100000;
	for(int i=m-1, j=0; j<n; j++){
		res= min(res, hillClimb(i, j));
	}
	cout<<res<<endl;
	
	return 0;
}