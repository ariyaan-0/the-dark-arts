#include <bits/stdc++.h>
using namespace std;

int arr[100000];
int brr[100000];

void merge(int l, int m, int h){
	int i=l, j=m+1, k=1;
	while(i<=m && j<=h){
		if(arr[i]<arr[j]){
			brr[k++]=arr[i++];
		}
		else{
			brr[k++]=arr[j++];
		}
	}
	for( ; i<=m; i++){
		brr[k++]=arr[i];
	}
	for( ; j<=h; j++){
		brr[k++]=arr[j];
	}
	for(i=l,k=1; i<=h;i++,k++){
        arr[i] = brr[k]; 
    }
    return;
	

}

void mergeSort(int l, int h){
	if(l<h){
		int m= (l+h)/2;
		mergeSort(l, m);
		mergeSort(m+1, h);
		merge(l, m, h);
	}
}

int main(){
	int n; cin>>n;
	for(int i=1; i<=n; i++){
		cin>>arr[i];
	}
	int l=1, h=n;

	mergeSort(l, h);

	for(int i=1; i<=n; i++){
		cout<<brr[i]<<" ";
	}

	return 0;

}