#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;

	v.push_back(1);
	v.push_back(2); 
	v.push_back(3); 
	v.push_back(4); 
	v.push_back(5);  

	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	cout<<*v.begin()<<endl;

	//deleting element
	//v.pop_back(); //this will delete the last element
	v.erase(find(v.begin(), v.end(), 3)); //erase takes a reference
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;

	return 0;
}