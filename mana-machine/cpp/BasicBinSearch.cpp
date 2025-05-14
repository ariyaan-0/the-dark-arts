#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+5];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int l=0, h=n-1, mid;
    while(l<=h){
        mid=(l+h)/2;
        if(arr[mid]==k){
            cout<<"Data is found at index "<<mid<<endl;
            break;
        }
        else if(arr[mid]<k){
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    if(l>h){
        cout<<"Element not found."<<endl;
    }
    return 0;
}