#include <bits/stdc++.h>
using namespace std;

int main(){
	double x; cin>>x;
	//int n; cin>>n;
	float lo=1, hi=x, mid;
	while(hi-lo>0.01){
		mid=(lo+hi)/2;
		if(pow(2, mid)<x){
			lo=mid;
		}
		else{
			hi=mid;
		}
	}
	cout<<lo<<endl;

}