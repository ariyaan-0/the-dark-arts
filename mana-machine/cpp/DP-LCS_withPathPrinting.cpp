#include <bits/stdc++.h>
using namespace std;

string s1, s2, s;
int dp[50][50];
int r;

int lcs(int i, int j){
	if(i<0||j<0) return 0;
	if(dp[i][j]!=-1) return dp[i][j];

	if(s1[i]==s2[j])
		r=1+lcs(i-1, j-1);
	else{
		int r1=lcs(i-1, j);
		int r2=lcs(i, j-1);
		r=max(r1, r2);
	}
	dp[i][j]=r;
	return dp[i][j];
}

void pathPrint(int i, int j){
	if(i<0|| j<0) return;

	if(s1[i]==s2[j]){
		pathPrint(i-1, j-1);
		cout<<s2[j];
	}
	else if(dp[i-1][j]>=dp[i][j-1]){
		pathPrint(i-1, j);
	}
	else{
		pathPrint(i, j-1);
	}
}

int main(){
	memset(dp, -1, sizeof(dp));
	cin>>s1>>s2;
	int i=s1.length();
	int j=s2.length();
	cout<<lcs(i-1, j-1)<<endl;
	pathPrint(i-1, j-1);
	return 0;
}