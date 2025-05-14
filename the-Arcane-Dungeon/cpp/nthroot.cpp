#include <bits/stdc++.h>
using namespace std;

double eps=1e-6;

/// for n th root-
float multiply(float mid, int n){
	float ans=1;
	while(n--){
		ans=ans*mid;
	}
	return ans;
}


int main(){
	double x; cin>>x;
	int n; cin>>n;
	float lo=1, hi=x, mid;
	while(hi-lo>eps){
		mid=(lo+hi)/2;
		if(multiply(mid, n)<x){
			lo=mid;
		}
		else{
			hi=mid;
		}
	}
	cout<<setprecision(3)<<lo<<endl;

}